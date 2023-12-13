//This is a CUnit testcase file 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <CUnit/Basic.h>
#include "./header/CompSq.h"

// SMTP connection parameters
char* server = "smtp.gmail.com";
int port = 587;
char* sender = "kiran.cabs@gmail.com";
char* recipient = "kirank.norge@gmail.com";

void CompSquaresTest(void)  // run testcases
{
  CU_ASSERT(CompSquares(1) == 1);
  CU_ASSERT(CompSquares(4) == 30);
  CU_ASSERT(CompSquares(0) == 0);
  CU_ASSERT(CompSquares(3810778) == 0);
  CU_ASSERT(CompSquares(3880000) == 0);
  CU_ASSERT(CompSquares(3810777) == 18446735571075162805);
  CU_ASSERT(CompSquares(-1) == 0);
  CU_ASSERT(CompSquares(1) == 2); // wrong expected value given to check for failure case

  // Check for test failure
  if (failureOccurred) {
    // Prepare failure message
    char message[1024];
    sprintf(message, "[Test Failure] %s: %s\n\nTimestamp: %s", testName, errorMessage, timestamp);

    // Establish SMTP connection
    int sockfd = connectToSMTPServer(server, port);
    if (sockfd == -1) {
      // Handle connection error
    }

    // Send SMTP command
    int res = sendSMTPCommand(sockfd, sender, recipient, message);
    if (res == -1) {
      // Handle command error
    }

    // Close SMTP connection
    closeSocket(sockfd);
  }
  
}

int main() 
{
  CU_pSuite pSuite = NULL;
  CU_initialize_registry();    
  pSuite = CU_add_suite("My Suite Square", NULL, NULL);
  CU_add_test(pSuite, "CompSquaresTestcases", CompSquaresTest);

  CU_basic_run_tests();
  CU_cleanup_registry();
  return CU_get_error();
}
