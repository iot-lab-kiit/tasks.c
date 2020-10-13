//prime no through recursion
#include<stdio.h>
int checkForPrime(int n1) // recursive function
{
    if(i==1)
    {
        return 1;
    }
    else if(n1 %i==0)
    {
         return 0;
    }     
    else
       {
         i = i -1; 
         checkForPrime(n1);//calling the function checkForPrime itself recursively
      }
}