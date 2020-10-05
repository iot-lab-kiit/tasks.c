#include<stdio.h>
void Sort_ele(int n, int a[])
{
    int x;
    for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {

                if(a[j]>a[j+1])
                {
                    x=a[j];
                    a[j]=a[j+1];
                    a[j+1]=x;
                }
            }
        }
    printf("The numbers arranged in ascending order is given below :\n");
    for(int i=0;i<n;i++)
        printf("%d\n",a[i]);
}
