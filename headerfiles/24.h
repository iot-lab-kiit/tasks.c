#include <stdio.h>
#include <stdlib.h>

int Largest(int* a, int n)
{
    int i, lar = 0;
    for (i=0; i<n; i++)
    {
        if(lar < *(a+i))
           lar = *(a+i);
    }
    printf("The largest element is %d ", lar);
}
