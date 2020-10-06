#include<stdio.h>

int sum_array_elements( int arr[], int n ) {
    
   if (n < 0) {
     
     return 0;
   }
    
    else{
     
     return (arr[n] + sum_array_elements(arr, n-1));
    }
}

    printf("Sum of elements of array is %d", sum);
}
