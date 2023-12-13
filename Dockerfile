# Dockerfile for Otee Task

# Using C/C++ runtime as the base image
FROM gcc:latest

RUN apt-get update && apt-get install -y gcc libcunit-dev

# Set the working directory inside the container
WORKDIR /ContainerApp

# Copy all files to the container

COPY . /ContainerApp/

# Compile the C code
RUN make makelib
