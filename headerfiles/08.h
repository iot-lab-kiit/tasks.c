#include <stdio.h>

int largest(int a[], int n)
{
    int largest=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>largest)
            largest=a[i];
    }
    printf("The largest element is: %d",largest);
}
