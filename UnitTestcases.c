
/* --------------------OTee Task: 12 Dec 2023 --------------------------------
Program to compute the number of squares in the infinite lattice and value of n given.
For instance: for n = 1 we can see one square, for n
= 2 we can see 5 squares, and so on.
*/

#include <stdio.h>
#include "./header/CompSq.h"

void testCompSquares(int n, ULLONG expResult); 

/* Function testCompSquares for unit tests
IN: Value of n, TYPE: INT
Expected Result value, TYPE UINT LONG LONG
OUT: Void - Function only prints the test failed/passed
*/
void testCompSquares(int n, ULLONG expResult) 
{
    ULLONG obResult;
    obResult = CompSquares(n);    //Call compute Square function
    if (obResult == expResult) //Compare expected and Obtained results
    {
        printf("Test Passed for n = %d, Expected Result: %llu, Obtained Result: %llu\n", n, expResult, obResult);
    } 
    else 
    {
        printf("Test Failed for n = %d, Expected Result: %llu, Obtained Result: %llu !!!! \n", n, expResult, obResult);
    }
}
int main() {
    // Test cases: 
    testCompSquares(1, 1);
    testCompSquares(2, 5);
    testCompSquares(3, 14);
    testCompSquares(4, 30);
    testCompSquares(-1, 0);
    testCompSquares(3880000, 0);
    testCompSquares(3810778, 0);
    testCompSquares(3810777, 18446735571075162805);
   // testCompSquares(3810776, (((3810776)*(3810776+1)*(3810776*2+1))/6));
    return 0;
}
