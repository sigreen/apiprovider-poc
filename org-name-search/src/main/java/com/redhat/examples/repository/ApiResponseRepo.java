package com.redhat.examples.repository;

import org.springframework.data.jpa.repository.JpaRepository;

import com.redhat.examples.models.ApiResponse;

public interface ApiResponseRepo extends JpaRepository<ApiResponse, Long>{

}
