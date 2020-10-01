#include <stdio.h>

int fact(int a)
{
    int f=1, i;
    if (a==0)
        return(f);
    else
    {
        for (i=1; i<=a; i++)
            f = f*i;
    }
    return(f);
}
