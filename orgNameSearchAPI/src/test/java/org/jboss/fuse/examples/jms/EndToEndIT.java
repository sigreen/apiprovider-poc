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
package org.jboss.fuse.examples.jms;

import org.apache.activemq.camel.component.ActiveMQComponent;
import org.apache.camel.impl.JndiRegistry;
import org.apache.camel.test.junit4.CamelTestSupport;
import org.junit.Test;


/**
 * Created by ceposta 
 * <a href="http://christianposta.com/blog>http://christianposta.com/blog</a>.
 */
public class EndToEndIT extends CamelTestSupport{

    @Test
    public void testCreateNewOrganization() {
        String payload = "{ \"queryType\": \"NewOrg\", \"orgId\": \"101\", \"orgName\": \"Foobar\"}";
        String response = template.requestBody("activemq:incoming.orgNameSearch", payload, String.class);
        assertNotNull(response);
        System.out.println(response);
    }

    @Test
    public void testSearchAllOrganizations() {
        String payload = "{ \"queryType\": \"SearchAll\", \"orgId\": \"\", \"orgName\": \"\"}";
        String response = template.requestBody("activemq:incoming.orgNameSearch", payload, String.class);
        assertNotNull(response);
        System.out.println(response);
    }

    @Test
    public void testSearchOrganizationById() {
        String payload = "{ \"queryType\": \"ById\", \"orgId\": \"100\", \"orgName\": \"\"}";
        String response = template.requestBody("activemq:incoming.orgNameSearch", payload, String.class);
        assertNotNull(response);
        System.out.println(response);
    }

    @Override
    protected JndiRegistry createRegistry() throws Exception {
        JndiRegistry reg = super.createRegistry();
        ActiveMQComponent amq = ActiveMQComponent.activeMQComponent("tcp://127.0.0.1:61616");
        amq.setUserName("admin");
        amq.setPassword("admin");
        reg.bind("activemq", amq);
        return reg;
    }
}
