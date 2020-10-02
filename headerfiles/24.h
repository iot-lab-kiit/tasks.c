#include <stdio.h>
#include <stdlib.h>

int Largest(int* a, int n)
{
    int i;
    for (i=1; i<n; i++)
    {
        if(*a < *(a+i))
           *a = *(a+i);
    }
    printf("The largest element is %d ", *a);
}
