# Dockerfile for Otee Task

# Using unbuntu as the base image
FROM ubuntu:latest

RUN apt-get update && apt-get install -y gcc libcunit-dev

# Set the working directory inside the container
WORKDIR /ContainerApp

# Copy all files to the container

COPY . /ContainerApp/

# Compile the C code
RUN make makelib
