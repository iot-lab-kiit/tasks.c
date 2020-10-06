#include <stdio.h>

// function to swap the two numbers
void swapusingpointer(int *x, int *y){
  *x= *x+*y;
  *y= *x-*y;
  *x= *x-*y;
}
