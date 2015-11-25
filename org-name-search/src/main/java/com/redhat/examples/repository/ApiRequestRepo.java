package com.redhat.examples.repository;

import org.springframework.data.jpa.repository.JpaRepository;

import com.redhat.examples.models.ApiRequest;

public interface ApiRequestRepo extends JpaRepository<ApiRequest, Long>{

}
