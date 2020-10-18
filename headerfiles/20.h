#include <stdio.h> //basic required header file.
float avg(int n1,int n2) //defining function avg with two parameters i.e., the numbers whose average is to be found out.
{
   float average; //declaring variable average as float.
   avg= (float)(n1+n2)/2; // dividing by 2 and explicit conversion of int is done into float.
   return average; //returning average of the numbers.
}
