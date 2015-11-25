package com.redhat.examples.rest;

import javax.ws.rs.POST;
import javax.ws.rs.Path;

import org.codehaus.enunciate.contract.jaxrs.ResourceMethodSignature;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;
import org.springframework.web.bind.annotation.RestController;

import com.redhat.examples.models.ApiRequest;
import com.redhat.examples.models.ApiRequestStatus;
import com.redhat.examples.models.ApiResponse;
import com.redhat.examples.models.Organization;
import com.redhat.examples.repository.ApiResponseRepo;
import com.redhat.examples.repository.OrganizationRepo;

@Path("/api_requests")
@RestController
@RequestMapping("/api_requests")
public class ApiRequestsResource {

	@Autowired
	private OrganizationRepo organizationRepo;

	@Autowired
	private ApiResponseRepo apiResponseRepo;

	public ApiRequestsResource() {

	}

	@POST
	@Path("/")
	@ResourceMethodSignature(output = ApiResponse.class)
	@RequestMapping(path = "/", method = RequestMethod.POST)
	public ApiResponse create(@RequestBody ApiRequest request) {
		
		
		final Organization organization = organizationRepo.findOne(request.getOrganization().getId());
		request.setOrganization(organization);
		
		final ApiResponse response = new ApiResponse();
		response.setApiRequest(request);
		response.setStatus(ApiRequestStatus.DEFINE.name());
		
		return apiResponseRepo.save(response);
	}

}