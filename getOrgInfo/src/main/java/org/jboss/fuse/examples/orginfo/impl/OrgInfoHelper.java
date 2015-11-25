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
import java.util.List;
import org.apache.camel.CamelContext;
import org.apache.camel.CamelContextAware;
import org.apache.camel.NoTypeConversionAvailableException;
import org.apache.camel.TypeConversionException;

public final class OrgInfoHelper implements CamelContextAware {

  private CamelContext camelContext;

  @Override
  public void setCamelContext(CamelContext camelContext) {
    this.camelContext = camelContext;
  }

  @Override
  public CamelContext getCamelContext() {
    return camelContext;
  }
  
  public List<String> normalizeOrgIds(Object obj) throws TypeConversionException, NoTypeConversionAvailableException {
    List<String> orgIds = new ArrayList<>();
    if (obj instanceof List) {
      for (Object item : (List) obj) {
        if (item instanceof String) {
          orgIds.add((String) item);
        } else {
          orgIds.add(camelContext.getTypeConverter().mandatoryConvertTo(String.class, obj));
        }
      }
    } else if (obj instanceof String) {
      orgIds.add((String) obj);
    } else {
      orgIds.add(camelContext.getTypeConverter().mandatoryConvertTo(String.class, obj));
    }
    return orgIds;
  }
}
