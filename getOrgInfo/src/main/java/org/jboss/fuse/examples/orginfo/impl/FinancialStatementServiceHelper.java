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

import com.standardandpoors.integration.serviceschema.v3.financial.FinancialStatementType;
import com.standardandpoors.integration.serviceschema.v3.financial.GetFinancialStatements;
import java.util.Calendar;
import java.util.List;
import java.util.TimeZone;

public final class FinancialStatementServiceHelper {

  public GetFinancialStatements createGetFinancialStatementsRequest(List<String> orgIds) {
    GetFinancialStatements getFinancialStatements = new GetFinancialStatements();
    for (String orgId : orgIds) {
      for (int i = 0; i < 5; ++i) {
        Calendar periodEndDate = Calendar.getInstance(TimeZone.getTimeZone("GMT"));
        /* Uncomment this if you want to see some Financial Statement Service results.
        periodEndDate.set(Calendar.YEAR, 2015);
        periodEndDate.set(Calendar.MONTH, Calendar.MARCH);
        periodEndDate.set(Calendar.DAY_OF_MONTH, 31);
        */
        FinancialStatementType financialStatementType = new FinancialStatementType();
        financialStatementType.setDataSource("AB");
        financialStatementType.setDataStage("FINAL");
        financialStatementType.setOrgId(orgId);
        financialStatementType.setOrgIdType("CORE");
        financialStatementType.setPeriodEndDate(periodEndDate);
        financialStatementType.setPeriodName("A");
        financialStatementType.setPeriodType("Annual");
        getFinancialStatements.getFinancialStatement().add(financialStatementType);

        periodEndDate.add(Calendar.YEAR, -i);
      }
    }
    return getFinancialStatements;
  }
}
