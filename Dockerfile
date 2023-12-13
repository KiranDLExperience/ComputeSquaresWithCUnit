# Dockerfile for Otee Task

# Using unbuntu as the base image
FROM ubuntu:latest

RUN apt-get update
RUN apt-get upgrade
RUN apt install build-essential
RUN apt install make
RUN apt-get install libcunit1



# Set the working directory inside the container
WORKDIR /ContainerApp

# Copy all files to the container

COPY . /ContainerApp/

# Compile the C code
RUN make makelib
