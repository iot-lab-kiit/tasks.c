#include <stdio.h>

// x is a formal parameter or dummy parameter
// Calculate using n!/(n-r)!*r!
int fact(int x)
{
    int i=1;
    while(x!=0)
    {
        i=i*x;
        x--;
    }
    return i;
}
