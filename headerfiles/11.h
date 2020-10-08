#include <stdio.h>
int largestOfThree(int num1, int num2, int num3)
{
  int *p1, *p2, *p3, largeNumber;
  //assigning the address of input numbers to pointers
  p1 = &num1;
  p2 = &num2;
  p3 = &num3;

  //using terinary operator 
  largeNumber = *p1 > *p2 ? (*p1 > *p3 ? *p1 : *p3) : (*p2 > *p3 ? *p2 : *p3);
  return (largeNumber);

  return 0;
}