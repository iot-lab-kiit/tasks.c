#include<stdio.h>

void Swap(int *x,int *y)
{
  int temp;
   temp = *x;
   *x = *y;
   *y = temp;
  printf("After Swapping\nx = %d\ny = %d\n", *x, *y);
}
