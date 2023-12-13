
/* --------------------OTee Task: 12 Dec 2023 --------------------------------
Program to compute the number of squares in the infinite lattice and value of n given.
For instance: for n = 1 we can see one square, for n
= 2 we can see 5 squares, and so on.
*/
#include <stdio.h>
#include "CompSq.h"


/*Function compSquares
IN: Value of n in the lattice, TYPE: INT
OUT: No. of squares in the lattice with nxn, TYPE: UNSIGNED LONG LONG
This function computes the number of squares in the nxn lattice 
*/
ULLONG CompSquares(int n)
{
    ULLONG totalSq=0;
    int i;
    if(n<=0 || n > MAX_N)
    {
        printf("INVALID Value of n < VALID Range: 1 - %d>\n", MAX_N);
        return 0;
    }
    for(i=1;i<=n;i++)
    {
        totalSq = totalSq + ((ULLONG)i * (ULLONG)i); //compute the square using 1^2+2^2+...+n^2
    }
    return totalSq;
}
