#include <stdio.h>

int main()
{
    int size, i;
    printf("Enter size:");        // i have take input , but doesn't use it in my logic
    scanf("%d", &size);
    int ar[size];
    printf("Enter the element \n");
    for (i = 0; i < size; i++)
        scanf("%d", &ar[i]);

    int calculateSize;
    calculateSize = sizeof(ar) / sizeof(ar[0]);        // it means dividing the size of  whole array by size of single array element
    printf("The size of array is : %d", calculateSize);
    return 0;
}