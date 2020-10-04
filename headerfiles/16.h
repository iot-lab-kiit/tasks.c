#include<stdio.h>

int factorial(int n){
        if(n<=1)
                return 1;
        return n*factorial(n-1);
}
int permutation(int n, int r){				//factorial(n)/factorial(n-r)
        if(!r)	return 1;				//if(r==0){ return 1;}
							//else
	return n*permutation(n-1, r-1);			//this is equivalent to return(n * (n-1) * (n-2) * ..... * (n-r+1))
}
