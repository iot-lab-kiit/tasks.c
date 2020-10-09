#include<stdio.h>

int fact(int n)
{
    if (n <= 1)
        return 1;
    return n*fact(n-1);
}

int nPr(int n, int r)
{
    return fact(n)/fact(n-r);
}
