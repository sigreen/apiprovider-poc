package com.redhat.examples.models;

import java.io.Serializable;

import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlRootElement;

@XmlRootElement
@XmlAccessorType(XmlAccessType.FIELD)
public abstract class PageResponse<T> implements Serializable {

	private static final long serialVersionUID = 1L;

	private T content;
	private Long totalElements;
	private Integer totalPages;

	public PageResponse() {

	}

	public T getContent() {
		return content;
	}

	public void setContent(T content) {
		this.content = content;
	}

	public Long getTotalElements() {
		return totalElements;
	}

	public void setTotalElements(Long totalElements) {
		this.totalElements = totalElements;
	}

	public Integer getTotalPages() {
		return totalPages;
	}

	public void setTotalPages(Integer totalPages) {
		this.totalPages = totalPages;
	}

	@Override
	public String toString() {
		return "PageResponse [content=" + content + ", totalElements=" + totalElements + ", totalPages=" + totalPages
				+ "]";
	}

}
