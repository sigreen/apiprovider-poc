orgNameSearch REST API Provider
=============================================

This example shows how to use Servlet REST to define REST endpoints in Camel routes using the Rest DSL

This example is implemented in XML DSL in the `src/main/resources/OSGI-INF/blueprint/camel.xml` file.

JBoss Fuse
-------------------------
You will need to install this example first:
  mvn install

First you need to install the following features in Fuse with:

  features:install camel-servlet
  features:install camel-jackson

Then you can install the Camel example:

  osgi:install -s mvn:org.jboss.fuse.examples/orgNameSearch/${project.version}

And you can see the application running by tailing the logs

  log:tail

And you can use ctrl + c to stop tailing the log.


There is a organization REST service that supports the following operations

 - GET /organization/{id} - to view a organization with the given org_id </li>
 - GET /organization/findAll - to view all organizations</li>
 - PUT /organization - to update/create an organization</li>

The view operations are HTTP GET, and update is using HTTP PUT.

From a web browser you can access the first two services using the following links

      http://localhost:8181/orgNameSearch/rest/organization/123    - to view the organization with id 123
      http://localhost:8181/orgNameSearch/rest/organization/findAll   - to list all organizations


From the command shell you can use curl to access the service as shown below:

    curl -X GET -H "Accept: application/json" http://localhost:8181/orgNameSearch/rest/organization/123
    curl -X GET -H "Accept: application/json" http://localhost:8181/orgNameSearch/rest/organization/findAll
    curl -X PUT -d "{ \"id\": 666, \"name\": \"ABC Bank\"}" -H "Accept: application/json" http://localhost:8181/orgNameSearch/rest/organization


If you hit any problems please let us know on the Camel Forums
  http://camel.apache.org/discussion-forums.html

Please help us make Apache Camel better - we appreciate any feedback you may
have.  Enjoy!

------------------------
The Camel riders!
