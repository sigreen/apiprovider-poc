package com.redhat.examples.models;

import java.io.Serializable;
import java.util.ArrayList;
import java.util.List;

import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlRootElement;

@XmlRootElement
@XmlAccessorType(XmlAccessType.FIELD)
public class Organizations implements Serializable {

	private static final long serialVersionUID = 1L;

	private List<Organization> organizations = new ArrayList<Organization>();

	public Organizations() {

	}

	public List<Organization> getOrganizations() {
		return organizations;
	}

	public void setOrganizations(List<Organization> organizations) {
		this.organizations = organizations;
	}

	@Override
	public String toString() {
		return "Organizations [organizations=" + organizations + "]";
	}

}