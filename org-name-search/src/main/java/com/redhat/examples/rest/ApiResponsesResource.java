package com.redhat.examples.rest;

import javax.ws.rs.GET;
import javax.ws.rs.PUT;
import javax.ws.rs.Path;
import javax.ws.rs.PathParam;

import org.codehaus.enunciate.contract.jaxrs.ResourceMethodSignature;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;
import org.springframework.web.bind.annotation.RestController;

import com.redhat.examples.models.ApiRequest;
import com.redhat.examples.models.ApiResponse;
import com.redhat.examples.models.ApiResponses;
import com.redhat.examples.repository.ApiRequestRepo;
import com.redhat.examples.repository.ApiResponseRepo;

@Path("/api_responses")
@RestController
@RequestMapping("/api_responses")
public class ApiResponsesResource {

	@Autowired
	private ApiRequestRepo apiRequestRepo;

	@Autowired
	private ApiResponseRepo apiResponseRepo;

	public ApiResponsesResource() {

	}

	@GET
	@Path("/")
	@ResourceMethodSignature(output = ApiResponses.class)
	@RequestMapping(path = "/", method = RequestMethod.GET)
	public ApiResponses get() {
		final ApiResponses responses = new ApiResponses();
		responses.getApiResponses().addAll(apiResponseRepo.findAll());
		return responses;
	}

	@GET
	@Path("/{id}")
	@ResourceMethodSignature(output = ApiResponse.class, pathParams = { @PathParam("id") })
	@RequestMapping(path = "/{id}", method = RequestMethod.GET)
	public ApiResponse getById(@PathVariable("id") Long id) {
		return apiResponseRepo.findOne(id);
	}

	@PUT
	@Path("/")
	@ResourceMethodSignature(output = ApiResponse.class)
	@RequestMapping(path = "/", method = RequestMethod.PUT)
	public ApiResponse update(@RequestBody ApiResponse response) {

		final ApiRequest request = apiRequestRepo.findOne(response.getApiRequest().getId());
		response.setApiRequest(request);

		return apiResponseRepo.save(response);
	}

}
