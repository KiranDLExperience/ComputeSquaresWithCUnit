#include <CUnit/Basic.h>
#include "./header/CompSq.h"

void CompSquaresTest(void) {
  CU_ASSERT(CompSquares(1) == 1);
  CU_ASSERT(CompSquares(4) == 30);
  CU_ASSERT(CompSquares(0) == 0);
  CU_ASSERT(CompSquares(3810778) == 0);
}

int main() 
{
  CU_pSuite pSuite = NULL;

  CU_initialize_registry();

  pSuite = CU_add_suite("My Suite", NULL, NULL);
  CU_add_test(pSuite, "CompSquaresTest", CompSquaresTest);

  CU_basic_run_tests();
  CU_cleanup_registry();

  return CU_get_error();
}
