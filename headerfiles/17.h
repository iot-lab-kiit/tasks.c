#include <stdio.h>

int fact(int n){
	if(n<=1)	return 1;
	return n*fact(n-1);
}

int perm(int n, int r){
	if(!r)	return 1;			//if(r==0){ return 1;}
        return n*perm(n-1, r-1);		//this is equivalent to return(n * (n-1) * (n-2) * ..... * (n-r+1))
}

int combination(int n, int r){
	return (perm(n, r)/fact(r));
}   
