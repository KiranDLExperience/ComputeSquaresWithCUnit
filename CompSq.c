
/* --------------------OTee Task: 12 Dec 2023 --------------------------------
Program to compute the number of squares in the infinite lattice and value of n given.
For instance: for n = 1 we can see one square, for n
= 2 we can see 5 squares, and so on.
*/

#include "CompSq.h"
#include "limits.h"

/*Function compSquares
IN: Value of n in the lattice, TYPE: INT
OUT: No. of squares in the lattice with nxn, TYPE: UNSIGNED LONG LONG
This function computes the number of squares in the nxn lattice 
*/
unsigned long long CompSquares(int n)
{
    unsigned long long totalSq=0;
    if(n<0)
    {
        printf("Invalid value of n\n");
        return 0;
    }
    
    for (int i = 1; i <= n; i++) 
    {
        totalSq = totalSq + (i * i);  /*Compute the number of squares of different sizes */
        if (totalSq > ULLONG_MAX)   /* This condition ensures that if the no. of squares > size variable can hold, 0 is returned*/
        {
            totalSq = i;
            break;
        }
    }
    return totalSq;
    
    /*return (n * (n + 1)) * (2 * n + 1) / 6; */
}
