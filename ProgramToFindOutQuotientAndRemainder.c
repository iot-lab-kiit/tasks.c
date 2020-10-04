#include <stdio.h>

int main()
{
    int divisor, dividend, quotient, remainder;

    printf("Enter the dividend: ");
    scanf("%d", &dividend);
    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    quotient = dividend / divisor;
    remainder = divisor % divisor;

    printf("The Quotient is : %d\n", quotient);
    printf("The Remainder is : %d\n", remainder);
    return 0;
}