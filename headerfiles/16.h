#include<stdio.h>

/*finding factorial by the use of terinary operator */

int fact(int n) {
   return (n == 1 || n == 0) ? 1 : fact(n - 1) * n;
}

/*finding the value of nPr by formulla n!/n-r! */

int permutation(int n, int r) {
   return (fact(n) / fact(n-r));
}
