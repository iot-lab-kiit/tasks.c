#include <stdio.h> 
void swap(int *x, int *y) { 
    int temp = *x; 
    *x = *y; 
    *y = temp; 
} 
double findMean(int arr[], int n) { 
    int sum = 0; 
    for (int i=0;i<n;i++)  
        sum = sum + arr[i]; 
      
    return (double)sum/(double)n; 
}
double findMedian(int arr[], int n){ 
    int i, j, min=0; 
   
    for (i=0;i<n-1;i++) { 
        min= i; 
        for (j=i+1;j<n;j++) 
            if (arr[j]<arr[min]) 
                min=j; 
  
        swap(&arr[min], &arr[i]); 
    } 
    if (n % 2 != 0) 
       return (double)arr[n/2]; 
      
    return (double)(arr[(n-1)/2] + arr[n/2])/2.0; 
} 