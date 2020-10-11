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
    if (flag == 1)
        printf("\n %d is not prime \n",n);
    else
        printf("\n %d is prime \n",n);
}