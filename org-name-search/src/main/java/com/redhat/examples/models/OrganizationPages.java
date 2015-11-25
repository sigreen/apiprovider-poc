package com.redhat.examples.models;

import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlRootElement;

@XmlRootElement
@XmlAccessorType(XmlAccessType.FIELD)
public class OrganizationPages extends PageResponse<Organizations> {

	private static final long serialVersionUID = 1L;

	public OrganizationPages() {
	}

}
