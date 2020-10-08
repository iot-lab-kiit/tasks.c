#include <stdio.h>
#include <stdbool.h>
void check_prime(int n)
{
    bool flag = 0;
    for (int i = 2; i <= n / 2; i++)
    {
        flag = 0;
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("\n not prime \n");
    else
        printf("\n prime \n");
}
