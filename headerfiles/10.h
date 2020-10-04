#include<stdio.h>

void num_of_elem()
{
// number of elements in an array
	  int arr[]= {10,20,30,40,50};
	  
	  int length = sizeof(arr) / sizeof(arr[0]);
    
    printf("Number of elements present in the array: %d", length); 
}
