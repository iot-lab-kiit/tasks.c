#include<stdio.h>

void sum_elements(int n, int a[])
{      int sum = 0;
    for(int i =0;i<n;i++){
        sum = sum+a[i];
    }
    printf("Sum of elements of array is %d", sum);
}
