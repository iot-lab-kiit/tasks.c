#include<stdio.h>
int factorial(int);

int factorial(int num)
{
 int i,fact=1;
 for(i=1;i<=num;i++)
 {
  fact=fact*i;
 }

 return(fact);
}
