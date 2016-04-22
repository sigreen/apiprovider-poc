/**
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 * <p/>
 * http://www.apache.org/licenses/LICENSE-2.0
 * <p/>
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
package org.jboss.fuse.examples.soap;

import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Created by ceposta 
 * <a href="http://christianposta.com/blog>http://christianposta.com/blog</a>.
 */
public class OrganizationQueryResponse {
	
    private String orgId;
    private String orgName;

    @JsonProperty("ORG_NAME")
    public String getOrgName() {
        return orgName;
    }
    
    @JsonProperty("ORG_NAME")
    public void setOrgName(String orgName) {
        this.orgName = orgName;
    }

    @JsonProperty("ORG_ID")
    public String getOrgId() {
        return orgId;
    }
    
    @JsonProperty("ORG_ID")
    public void setOrgId(String orgId) {
        this.orgId = orgId;
    }
	
}
