getOrgInfo Implemenation
========================

Building Example
----------------

Run the Maven build

```
~$ cd $PROJECT_ROOT
~$ mvn clean install
```

JBoss Fuse
----------

Start the JBoss Fuse server

```
~$ $JBOSS_FUSE_HOME/bin/fuse
```

From the JBoss Fuse console, enter the following to install the example application

```
JBossFuse:karaf@root> features:addurl mvn:org.jboss.fuse.examples/apiprovider-features/1.0.0-SNAPSHOT/xml/features
JBossFuse:karaf@root> features:install apiprovider-getOrgInfo
```

To see what is happening within the JBoss Fuse server, you can continuously view the
log (tail) with the following command

```
JBossFuse:karaf@root> log:tail
```

Testing
-------

To view the info for the organization with the given `orgId`. _Note: You can view the info for more than one organization by repeating the `orgId` query parameter._
 ```
GET /apiprovider/rest/OrgInfo?orgId={id}[&orgId={id}...]
```

From a web browser you can access the service using the following link: [http://localhost:8181/rest/OrgInfo?orgId=108569]http://localhost:8181/apiprovider/rest/OrgInfo?orgId=108569)

From the command shell you can use curl to access the service as shown below:

```
~$ curl -X GET -H "Accept: application/json" http://localhost:8181/apiprovider/rest/OrgInfo?orgId=108569
```
