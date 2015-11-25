package com.redhat.examples.rest;

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

@RestController
@RequestMapping("/organizations")
public class OrganizationResource {

	@Autowired
	private OrganizationRepo organizationRepo;

	public OrganizationResource() {

	}

	@RequestMapping("/")
	public Organizations get() {
		final Organizations organizations = new Organizations();
		for (Organization organization : organizationRepo.findAll()) {
			organizations.getOrganizations().add(organization);
		}
		return organizations;
	}

	@RequestMapping("/{orgName}")
	public Organizations findByOrgName(@PathVariable("orgName") String orgName) {
		final Organizations organizations = new Organizations();
		organizations.getOrganizations().addAll(organizationRepo.findByOrgNameContaining(orgName));
		return organizations;
	}

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
