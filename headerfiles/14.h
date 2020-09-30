#include <stdio.h>

// function to swap the two numbers
void swapusingpointer(int *x, int *y)
{
  int t;
  t = *x;
  *x = *y;
  *y = t;
}