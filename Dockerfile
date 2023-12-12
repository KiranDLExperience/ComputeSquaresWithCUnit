# Dockerfile for Otee Task

# Using C/C++ runtime as the base image
FROM gcc:latest

# Set the working directory inside the container
WORKDIR /ContainerApp

# Copy all files to the container

COPY . /ContainerApp/

# Compile the C code
RUN make makelib

# Set the command to see if the object file is build
CMD ["./runtest"]