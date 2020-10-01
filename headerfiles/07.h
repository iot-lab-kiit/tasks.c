#include<stdio.h>
void Sort_ele(int n, int a[])
{
    int x;
    for(int i=0;i<=n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {

                if(a[i]>a[j])
                {
                    x=a[i];
                    a[i]=a[j];
                    a[j]=x;
                }
            }
        }
    printf("The numbers arranged in ascending order is given below :\n");
    for(int i=0;i<=n;i++)
        printf("%d\n",a[i]);
}
