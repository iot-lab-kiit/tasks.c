#include<stdio.h>
void swap(int *x,*y)
{
  int temp;

   temp = *y;
   *y= *x;
   *x= temp;

   printf("After Swapping\nx = %d\ny = %d\n", *x, *y);
}
