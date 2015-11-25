package com.redhat.examples.aspects;

import org.aspectj.lang.annotation.After;
import org.aspectj.lang.annotation.Aspect;

import com.redhat.examples.models.ApiResponse;

@Aspect
public class ApiResponseAspect {

	public ApiResponseAspect() {
	}

	@After("execution(public * com.redhat.examples.rest.ApiResponsesResource.update(..)) && args(response)")
	public void afterUpdatingApiRequirement(ApiResponse response) {
		/**
		 * TODO
		 * 
		 * Here we will send a Camel Email notification with the latest status
		 * of the API Requirement request
		 */
		System.out.println("Updating " + response);
	}

}
