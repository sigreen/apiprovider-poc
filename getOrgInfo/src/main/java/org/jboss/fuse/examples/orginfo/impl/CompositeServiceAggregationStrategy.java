/*
 * Copyright (C) Red Hat, Inc.
 * http://www.redhat.com
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
package org.jboss.fuse.examples.orginfo.impl;

import com.standardandpoors.integration.serviceschema.RatingSchemaType;
import com.standardandpoors.integration.serviceschema.ShowRatingsByEntitySchemaType;
import com.standardandpoors.integration.serviceschema.v3.financial.DP;
import com.standardandpoors.integration.serviceschema.v3.financial.FinancialStatementType;
import com.standardandpoors.integration.serviceschema.v3.financial.GetFinancialStatementsResponse;
import com.standardandpoors.integration.serviceschema.v3.financial.Property;
import javax.xml.bind.DatatypeConverter;
import org.apache.camel.CamelContext;
import org.apache.camel.CamelContextAware;
import org.apache.camel.Exchange;
import org.apache.camel.impl.DefaultExchange;
import org.apache.camel.processor.aggregate.AggregationStrategy;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

public class CompositeServiceAggregationStrategy implements AggregationStrategy, CamelContextAware {

  private final Logger log = LoggerFactory.getLogger(CompositeServiceAggregationStrategy.class);

  private CamelContext camelContext;

  @Override
  public void setCamelContext(CamelContext camelContext) {
    this.camelContext = camelContext;
  }

  @Override
  public CamelContext getCamelContext() {
    return camelContext;
  }

  @Override
  public Exchange aggregate(Exchange oldExchange, Exchange newExchange) {
    if (oldExchange == null) {
      oldExchange = new DefaultExchange(camelContext);
    }

    OrgInfoResponse response = (OrgInfoResponse) oldExchange.getIn().getBody();
    if (response == null) {
      response = new OrgInfoResponse();
      oldExchange.getIn().setBody(response);
    }

    Object serviceResponse = newExchange.getIn().getBody();
    if (serviceResponse == null) {
      log.warn(String.format("Got a null response back from '%s'.", newExchange.getIn().getHeader(Exchange.HTTP_URI)));
    } else if (serviceResponse instanceof ShowRatingsByEntitySchemaType) {
      ShowRatingsByEntitySchemaType typedServiceResponse = ((ShowRatingsByEntitySchemaType) serviceResponse);
      if (typedServiceResponse.getDataArea() != null
              && typedServiceResponse.getDataArea().getRatingsByEntity() != null
              && typedServiceResponse.getDataArea().getRatingsByEntity().getOrganization() != null
              && typedServiceResponse.getDataArea().getRatingsByEntity().getOrganization().size() > 0
              && typedServiceResponse.getDataArea().getRatingsByEntity().getOrganization().get(0).getRating() != null
              && typedServiceResponse.getDataArea().getRatingsByEntity().getOrganization().get(0).getRating().size() > 0) {
        RatingSchemaType ratingType = typedServiceResponse.getDataArea().getRatingsByEntity().getOrganization().get(0).getRating().get(0);
        if (ratingType != null) {
          if (ratingType.getDebtTypeCode() != null) {
            response.setDebtType(ratingType.getDebtTypeCode().getValue());
          }
          if (ratingType.getRatingTypeCode() != null) {
            response.setRatingType(ratingType.getRatingTypeCode().getValue());
          }
          if (ratingType.getRating() != null
                  && ratingType.getRating().getRatingScore() != null) {
            response.setRating(ratingType.getRating().getRatingScore().getValue());
          }
          if (ratingType.getEffectiveDate() != null) {
            response.setEffectiveDate(DatatypeConverter.parseDateTime(ratingType.getEffectiveDate()));
          }
        }
      }
    } else if (serviceResponse instanceof GetFinancialStatementsResponse) {
      GetFinancialStatementsResponse typedServiceResponse = ((GetFinancialStatementsResponse) serviceResponse);
      for (FinancialStatementType financialStatementType : typedServiceResponse.getFinancialStatement()) {
        FinancialStatement financialStatement = new FinancialStatement();
        for (Property property : financialStatementType.getProperty()) {
          if ("FISCAL_YEAR".equalsIgnoreCase(property.getName())) {
            financialStatement.setFiscalYear(property.getValue());
          }
        }
        for (DP dp : financialStatementType.getDP()) {
          if ("NI".equalsIgnoreCase(dp.getMne())) {
            financialStatement.setNetIncome(dp.getValue());
          } else if ("REVTA".equalsIgnoreCase(dp.getMne())) {
            financialStatement.setRevenue(dp.getValue());
          }
        }
        response.getFinancialStatements().add(financialStatement);
      }
    } else {
      throw new IllegalArgumentException(String.format("I don't know how to merge a '%s'.", serviceResponse.getClass().getName()));
    }

    return oldExchange;
  }
}
