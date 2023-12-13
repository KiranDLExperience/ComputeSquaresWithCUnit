#include <CUnit/Basic.h>
#include "./header/CompSq.h"

void test_function(void) {
    ULLONG result = CompSquares(4);
    CU_ASSERT_EQUAL(result, 30);
}
