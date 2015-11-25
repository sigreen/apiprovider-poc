package com.redhat.examples.repository;

import java.util.List;

import org.springframework.data.repository.PagingAndSortingRepository;

import com.redhat.examples.models.Organization;

public interface OrganizationRepo extends PagingAndSortingRepository<Organization, Long> {
	List<Organization> findByOrgNameContaining(String orgName);
}
