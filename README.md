Task for OTee for computeSquares in a lattice of nxn

This will run the unit testcases for the compute Square function 
Files include:
Makefile for creating the object file for the function
Dockerfile
Source and header files
UnitTestcase.c file

There are two workflows defined -
Build and Run Testcases.
- The Build workflow builds the DockerImage and Run it for building the library files on any push/pull of the code.
- The Testcase workflow runs the Unit test cases on every Build of the code.
