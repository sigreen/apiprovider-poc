package com.redhat.examples;

import org.apache.camel.spring.boot.FatJarRouter;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;

@SpringBootApplication
public class Application extends FatJarRouter {

	@Override
	public void configure() throws Exception {
		/**
		 * Routes can be added here
		 */
	}

	public static void main(String... args) {
		SpringApplication.run(Application.class, args);
	}

}
