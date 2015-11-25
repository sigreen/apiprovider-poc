Example project with APIs for integrating with API management 
===========================

Build project with

> mvn clean install


Install into Fuse with:

> features:addurl mvn:org.jboss.fuse.examples/apiprovider-features/1.0.0-SNAPSHOT/xml/features
> features:install apiprovider-orgNameSearchAPI

Find REST endpoints here:

    GET - /orgNameSearch/rest/organization/{id}
    GET - /orgNameSearch/rest/organization/findAll
    PUT - /orgNameSearch/rest/organization