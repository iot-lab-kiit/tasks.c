#include <stdio.h>

void cyclicSwapbyRef(int *x, int *y, int *z)
{
    int tmp;
    tmp = *y;
    *y = *x;
    *x = *z;
    *z = tmp;
}


