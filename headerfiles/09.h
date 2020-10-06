#include<stdio.h>

int sum_elements( int n,int a[]) {
    
int i,sum=0;
    
    int *p;
     p=a;       /*Pointer p containing the starting addres of the array a. */
    
    for(i=0; i<n; i++)
        
    {
        
        sum=sum+*p;
        
        p++;
    }
    
    printf("Sum of elements of array is %d", sum);
}
