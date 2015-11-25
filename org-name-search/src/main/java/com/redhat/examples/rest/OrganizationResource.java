package com.redhat.examples.rest;

import javax.ws.rs.GET;
import javax.ws.rs.Path;
import javax.ws.rs.PathParam;

import org.codehaus.enunciate.contract.jaxrs.ResourceMethodSignature;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.data.domain.Page;
import org.springframework.data.domain.PageRequest;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.redhat.examples.models.Organization;
import com.redhat.examples.models.OrganizationPages;
import com.redhat.examples.models.Organizations;
import com.redhat.examples.repository.OrganizationRepo;

@Path("/organizations")
@RestController
@RequestMapping("/organizations")
public class OrganizationResource {

	@Autowired
	private OrganizationRepo organizationRepo;

	public OrganizationResource() {

	}

	@GET
	@Path("/")
	@ResourceMethodSignature(output = Organizations.class)
	@RequestMapping("/")
	public Organizations get() {
		final Organizations organizations = new Organizations();
		for (Organization organization : organizationRepo.findAll()) {
			organizations.getOrganizations().add(organization);
		}
		return organizations;
	}

	@GET
	@Path("/{orgName}")
	@ResourceMethodSignature(output = Organizations.class, pathParams = { @PathParam("orgName") })
	@RequestMapping("/{orgName}")
	public Organizations findByOrgName(@PathVariable("orgName") String orgName) {
		final Organizations organizations = new Organizations();
		organizations.getOrganizations().addAll(organizationRepo.findByOrgNameContaining(orgName));
		return organizations;
	}

	@GET
	@Path("/page/{page}/size/{size}")
	@ResourceMethodSignature(output = OrganizationPages.class, pathParams = { @PathParam("page"), @PathParam("size") })
	@RequestMapping(path = "/page/{page}/size/{size}")
	public OrganizationPages paginate(@PathVariable int page, @PathVariable int size) {
		final OrganizationPages organizationResponse = new OrganizationPages();
		final Page<Organization> organizationPages = organizationRepo.findAll(new PageRequest(page, size));

		Organizations organizations = new Organizations();
		organizations.getOrganizations().addAll(organizationPages.getContent());

		organizationResponse.setContent(organizations);
		organizationResponse.setTotalElements(organizationPages.getTotalElements());
		organizationResponse.setTotalPages(organizationPages.getTotalPages());

		return organizationResponse;
	}

}
