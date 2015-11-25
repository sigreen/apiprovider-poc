package com.redhat.examples.models;

import java.io.Serializable;
import java.util.ArrayList;
import java.util.List;

import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlRootElement;

import org.codehaus.enunciate.ClientName;

@XmlRootElement
@XmlAccessorType(XmlAccessType.FIELD)
public class ApiResponses implements Serializable {

	private static final long serialVersionUID = 1L;

	@ClientName("apiResponseList")
	private List<ApiResponse> apiResponses = new ArrayList<ApiResponse>();

	public ApiResponses() {
	}

	public List<ApiResponse> getApiResponses() {
		return apiResponses;
	}

	public void setApiResponses(List<ApiResponse> apiResponses) {
		this.apiResponses = apiResponses;
	}

}
