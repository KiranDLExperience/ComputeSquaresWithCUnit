/* This is sample code for running the repository code*/

#include <stdio.h>
#include <stdlib.h>
#include "../header/CompSq.h"

int main()
{
    int n=0;
    ULLONG squares;
 
    printf("Run this sample code to use code\n");
    printf("Enter the value of n:: ");
    scanf("%d",&n);
    squares = CompSquares(n);
    if(squares)
        printf("The no. of squares are:: %llu in %d x %d lattic\n",squares,n,n);
    return 0;   
}