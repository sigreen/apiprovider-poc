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

import com.standardandpoors.integration.serviceschema.GetRatingsByEntityDataAreaSchemaType;
import com.standardandpoors.integration.serviceschema.GetRatingsByEntitySchemaType;
import com.standardandpoors.integration.serviceschema.OrganizationSchemaType;
import com.standardandpoors.integration.serviceschema.RatingsByEntitySchemaType;
import java.util.Calendar;
import java.util.List;
import java.util.TimeZone;
import org.openapplications.oagis._9.ApplicationAreaType;
import org.openapplications.oagis._9.IdentifierType;
import org.openapplications.oagis._9.PartyIDsType;
import org.openapplications.oagis._9.SenderType;

public final class RatingServiceHelper {
  
  public GetRatingsByEntitySchemaType createGetRatingsByEntityRequest(List<String> orgIds) {
    GetRatingsByEntitySchemaType getRatingsByEntitySchemaType = new GetRatingsByEntitySchemaType();
    ApplicationAreaType applicationAreaType = new ApplicationAreaType();
    SenderType senderType = new SenderType();
    IdentifierType authorizationIdIdentifierType = new IdentifierType();
    authorizationIdIdentifierType.setSchemeAgencyID("CORE");
    authorizationIdIdentifierType.setValue("M12");
    senderType.setAuthorizationID(authorizationIdIdentifierType);
    applicationAreaType.setSender(senderType);
    applicationAreaType.setCreationDateTime(String.format("%tF", Calendar.getInstance(TimeZone.getTimeZone("GMT"))));
    getRatingsByEntitySchemaType.setApplicationArea(applicationAreaType);
    GetRatingsByEntityDataAreaSchemaType getRatingsByEntityDataAreaSchemaType = new GetRatingsByEntityDataAreaSchemaType();
    RatingsByEntitySchemaType ratingsByEntitySchemaType = new RatingsByEntitySchemaType();
    for (String orgId : orgIds) {
      OrganizationSchemaType organizationSchemaType = new OrganizationSchemaType();
      PartyIDsType partyIDsType = new PartyIDsType();
      IdentifierType partyIdIdentifierType = new IdentifierType();
      partyIdIdentifierType.setSchemeAgencyID("CORE");
      partyIdIdentifierType.setValue(orgId);
      partyIDsType.getID().add(partyIdIdentifierType);
      organizationSchemaType.setPartyIDs(partyIDsType);
      ratingsByEntitySchemaType.getOrganization().add(organizationSchemaType);
    }
    getRatingsByEntityDataAreaSchemaType.setRatingsByEntity(ratingsByEntitySchemaType);
    getRatingsByEntitySchemaType.setDataArea(getRatingsByEntityDataAreaSchemaType);
    return getRatingsByEntitySchemaType;
  }
}
