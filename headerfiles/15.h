#include <stdio.h>

void accessPtr(int num){
    int *ptr;  
    ptr=&num; 
    printf("Using pointer variable:\n");
    printf("Number: %d\nAddress of number: %u\n",*ptr,ptr);
}