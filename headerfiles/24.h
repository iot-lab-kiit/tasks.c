#include <stdio.h>
#include <stdlib.h>

int Largest(int* a, int n)
{                                     /* here we are assigning the value starting address of the array in the pointer type variable a. for example a=arr[0] */
    int i;
    for (i=1; i<n; i++)
    {
        if(*a < *(a+i))              /*comparing the each value with the intial value of the array. if less than the intial value then we assign it  to the starting of the array. */
           *a = *(a+i);
    }
    printf("The largest element is %d ", *a);
}
