#include <stdio.h>
#include <string.h>
void reverse(char str[], int j, int k)
{
    char i;
    i = str[j];
    str[j] = str[k - j];
    str[k - j] = i;
    if (j == k/2)
        {
            return;
        }
    reverse(str, j + 1, k);
}
