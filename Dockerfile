# Dockerfile for Otee Task

# Using unbuntu as the base image
FROM ubuntu:latest

RUN apt-get update
RUN apt install make
RUN apt-get install libcunit1
RUN apt install gcc-12 g++-12 -y

# Set the working directory inside the container
WORKDIR /ContainerApp

# Copy all files to the container

COPY . /ContainerApp/

# Compile the C code
RUN make makelib
