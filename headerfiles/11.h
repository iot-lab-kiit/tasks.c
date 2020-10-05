#include <stdio.h>
int largestOfThree(int num1, int num2, int num3)
{
    int *p1, *p2, *p3;
    //assigning the address of input numbers to pointers
    p1 = &num1;
    p2 = &num2;
    p3 = &num3;
    if(*p1 > *p2)
    {
		if(*p1 > *p3)
			printf("%d is the largest number", *p1);
		else
			printf("%d is the largest number\n", *p3);
    }
    else
    {
		if(*p2 > *p3)
			printf("%d is the largest number\n", *p2);
		else
			printf("%d is the largest number\n", *p3);
    }
    return 0;
}