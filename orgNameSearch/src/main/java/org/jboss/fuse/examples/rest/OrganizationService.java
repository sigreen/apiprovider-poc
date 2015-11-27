/**
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
package org.jboss.fuse.examples.rest;

import java.util.Collection;
import java.util.List;
import java.util.Map;
import java.util.TreeMap;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

/**
 * A {@link org.jboss.fuse.examples.rest.Organization} service which we rest enable from the {@link org.apache.camel.example.rest.UserRouteBuilder}.
 */
public class OrganizationService {

    // use a tree map so they become sorted
    private final Map<String, Organization> organizations = new TreeMap<String, Organization>();
    Logger LOGGER = LoggerFactory.getLogger(OrganizationService.class);


    /**
     * Gets a user by the given id
     *
     * @param id  the id of the user
     * @return the user, or <tt>null</tt> if no user exists
     */
    public Organization getOrganization(String id) {
        return organizations.get(id);
    }

    /**
     * List all users
     *
     * @return the list of all users
     */
    public Collection<Organization> listOrganizations() {
        return organizations.values();
    }

    /**
     * Updates or creates the given user
     *
     * @param user the user
     */
    public void updateOrganization(Organization organization) {
    	organizations.put("" + organization.getOrg_id(), organization);
    }
    
    /**
     * Read the CSV file as a list
     * @param csvData
     */
    public void doHandleCsvData(List<List<String>> csvData)
    {
    	for (List<String> line : csvData) {
    		int org_id = Integer.parseInt(line.get(0));
    		String org_name = line.get(1);
    		Organization organization = new Organization(org_id, org_name);
    		updateOrganization(organization);
    	}
    }
}
