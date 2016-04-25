package org.jboss.fuse.examples.rest;

import org.apache.camel.Exchange;
import org.apache.camel.Processor;
import org.jboss.fuse.examples.soap.OrganizationQueryRequest;

public class CountryProcessor implements Processor{
	
    @Override
    public void process(Exchange exchange) throws Exception {
        // get the code and body of the response
    	String code = (String) exchange.getIn().getHeader("countryCode");
        String body = (String) exchange.getIn().getBody();
        
        Country country = new Country(code, body);

        // set the Country POJO as the camel exchange
        exchange.getIn().setBody(country);
    }

}
