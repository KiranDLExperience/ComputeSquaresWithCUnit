//This is a CUnit testcase file 

#include <CUnit/Basic.h>
#include "./header/CompSq.h"

void CompSquaresTest(void)  // run testcases
{
  CU_ASSERT(CompSquares(1) == 1);
  CU_ASSERT(CompSquares(4) == 30);
  CU_ASSERT(CompSquares(0) == 0);
  CU_ASSERT(CompSquares(3810778) == 0);
  CU_ASSERT(CompSquares(3880000) == 0);
  CU_ASSERT(CompSquares(3810777) == 18446735571075162805);
  CU_ASSERT(CompSquares(-1) == 0);
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
