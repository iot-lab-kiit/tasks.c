#include<stdio.h>

/* Finding the factorial first. */

int fact(int n)
{

int f=1;

while(n!=0)
{

f=f*n;

n--;
}

	/*Now calculating the permutation for the given nPr. */
	
	/*Formulla for nPr is n!/(n-r)! */
	
	
int permutation(int n,int r)
{

return (fact(n)/fact(n-r));

}


