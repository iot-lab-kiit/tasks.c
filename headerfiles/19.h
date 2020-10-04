#include<stdio.h>

void quotientandremainder(int dividend, int divisor) {
    int quotient, remainder;

    quotient = dividend / divisor; // finds the quotient
    remainder = dividend % divisor; // finds the remainder
    
    printf("The quotient is %d\n", quotient);
    printf("The remainder is %d\n", remainder);
}