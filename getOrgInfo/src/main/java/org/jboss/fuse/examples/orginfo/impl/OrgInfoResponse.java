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

import java.util.ArrayList;
import java.util.Calendar;
import java.util.List;

public class OrgInfoResponse {
 
  private String debtType;
  private String ratingType;
  private String rating;
  private Calendar effectiveDate;
  private List<FinancialStatement> financialStatements;

  public String getDebtType() {
    return debtType;
  }

  public void setDebtType(String debtType) {
    this.debtType = debtType;
  }

  public String getRatingType() {
    return ratingType;
  }

  public void setRatingType(String ratingType) {
    this.ratingType = ratingType;
  }

  public String getRating() {
    return rating;
  }

  public void setRating(String rating) {
    this.rating = rating;
  }

  public Calendar getEffectiveDate() {
    return effectiveDate;
  }

  public void setEffectiveDate(Calendar effectiveDate) {
    this.effectiveDate = effectiveDate;
  }

  public List<FinancialStatement> getFinancialStatements() {
    if (financialStatements == null) {
      financialStatements = new ArrayList<>();
    }
    return financialStatements;
  }
}
