#include <stdio.h>

/*finding the factorial */

/*for the value 0 and 1 we will return 1. because factorial of 0 and 1 is 1. */

int factorial(int n) {
	
   return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

/*finding the value of nCr by formulla, n!/(n-r)! * r!. */

int combination(int n, int r) {
	
   return (factorial(n)/factorial(n-r)/factorial(r));
  
}
  
