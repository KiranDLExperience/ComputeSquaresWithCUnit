#include <CUnit/Basic.h>
#include "./header/CompSq.h"

void test_function(void) {
    ULLONG result = compSquares(4);
    CU_ASSERT_EQUAL(result, 30);
}