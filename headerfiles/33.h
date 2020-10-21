#include <stdio.h>
#include <stdbool.h>

void check_prime(int n)
{
    bool flag = 0;
    for (int i = 2; i*i <= n; i++)
    {
        flag = 0;
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    // if number is not prime if it has factors other than 1 and itself or if the number is less than 2
    if (flag == 1 || n < 2)
        printf("\n %d is not prime \n",n);
    else
        printf("\n %d is prime \n",n);
}