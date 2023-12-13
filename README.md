# PROJECT DESCRIPTION
This repository contains a C function which computes the no. of squares for given nxn grid and the corresponding Dockerfile and Makefile.
It also has two GitHub Actions workflows that automate the build and test of the application.
Development Environment used VSCode
TestTool: CUnit

# Makefile
The Makefile contains the following targets:

- build: Builds the library for the function
- run: Builds the CUnit executable

# Dockerfile
The Dockerfile builds a container image that contains the C code with its dependencies. It uses the FROM instruction to base the image on the ubuntu:latest image and then installs the necessary packages for building and running the make. It also adds the C source files and Makefile to the image.

# GitHub Actions Workflows
There are two GitHub Actions workflows:

- ### Build:
    This workflow builds the Docker image, runs the makefile and creates the libraries
- ### Unit testcase:
    This workflow runs the CUnit tests and display the failed/pass testcases statistics

The Build workflow is triggered by push events to the main branch. 
The Unit Testcase workflow is triggered by an even i.e. completion of the Build workflow

# Usage
Clone the git repostry in your local machine. Go to the folder where you want to clone the respository and run the command:

    git clone "https://github.com/KiranDLExperience/ComputeSquaresWithCUnit"
  
To build the Docker image, run the following command:

    docker build -t your-docker-image .
Ensure that you have Docker installed and running on your system. Also since the test tool CUnit is ued install the Cunit if not installed on your system.
    sudo apt-get install libcunit1 libcunit1-dev

The docker build command will show the following output on your terminal:

   ![Docker-Build](https://github.com/KiranDLExperience/ComputeSquaresWithCUnit/assets/86914350/510744ca-1404-409c-833c-1b2e8a83adf6)

To run the docker image type:

    docker run your-docker-image
    
The output terminal after docker run command will show:

![run-docker](https://github.com/KiranDLExperience/ComputeSquaresWithCUnit/assets/86914350/33013d48-bcf5-4cd1-99e5-ac98cd3018b9)

To run the CUnit tests, run the following command:

    make makeunittestsuite
The output on the terminal for the make command shall look like this:
    
![make-test](https://github.com/KiranDLExperience/ComputeSquaresWithCUnit/assets/86914350/30e18b31-5595-4c10-9e3b-b273dc01b6d7)

Execute the testcase using the command:
    ./runtest
The output will be shown on terminal with the test suite result showing passed and failed cases:

![run-test](https://github.com/KiranDLExperience/ComputeSquaresWithCUnit/assets/86914350/f48543c0-ebfc-4fcb-a019-77158e71b64f)

To run the Git Hub Actions workflows, you need to clone the repository . Once you have done this, you can trigger the workflows by pushing events to your repository or manually triggering the workflows.

You can also run the sample code in the folder samplecode-run to test the usage of libarry function. To do so build the code using libaries using the following command and run the target file:

gcc -c samplecode.c ../src/CompSq.a -o run-sample 


Happy Coding!
