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

public class FinancialStatement {

  private String fiscalYear;  
  private String revenue;
  private String netIncome;

  public String getFiscalYear() {
    return fiscalYear;
  }

  public void setFiscalYear(String fiscalYear) {
    this.fiscalYear = fiscalYear;
  }

  public String getRevenue() {
    return revenue;
  }

  public void setRevenue(String revenue) {
    this.revenue = revenue;
  }

  public String getNetIncome() {
    return netIncome;
  }

  public void setNetIncome(String netIncome) {
    this.netIncome = netIncome;
  }
}
