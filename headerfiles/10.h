#include <stdio.h>

void count(int a[])
{
    int n;
    n = sizeof(a) / sizeof(a[0]);
    printf("The number of elements in the array is: %d\n", n);
}