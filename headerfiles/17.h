#include <stdio.h>
long factorial(int);
long find_ncr(int, int);

long find_ncr(int n, int r)
{
   long result;

   result = factorial(n)/(factorial(r)*factorial(n-r));

   return result;
}

long factorial(int n)
{
   int c;
   long result = 1;

   for (c = 1; c <= n; c++)
      result = result*c;

   return result;
}
