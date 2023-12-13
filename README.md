# PROJECT DESCRIPTION
This repository contains a C function which computes the no. of squares for given nxn grid and the corresponding Dockerfile and Makefile.
It also has two GitHub Actions workflows that automate the build and test of the application.

# Makefile
The Makefile contains the following targets:

- build: Builds the library for the function
- run: Builds the CUnit executable

# Dockerfile
The Dockerfile builds a container image that contains the C code with its dependencies. It uses the FROM instruction to base the image on the ubuntu:latest image and then installs the necessary packages for building and running the make. It also adds the C source files and Makefile to the image.

# GitHub Actions Workflows
There are two GitHub Actions workflows:

- build: This workflow builds the Docker image, runs the makefile and creates the libraries
- test: This workflow runs the CUnit tests and display the failed/pass testcases statistics

The Build workflow is triggered by push events to the main branch. 
The Unit Testcase workflow is triggered by an even i.e. completion of the Build workflow

# Usage
To build the Docker image, run the following command:

    docker build -t computesquares .

To run the docker image type:

    docker run computesquares

To run the CUnit tests, run the following command:

    make makeunittestsuite
    ./runtest

To run the GitHub Actions workflows, you need to create a GitHub Actions repository and push the code to your repository. You will also need to create a Docker registry and publish the Docker image to your registry. Once you have done this, you can trigger the workflows by pushing events to your repository or manually triggering the workflows.

Happy Coding!
