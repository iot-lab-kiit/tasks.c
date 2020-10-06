#include<stdio.h>
void pascal(int row)
{   
    int i,sp,j,coe=1,k=0;
    for(i=1;i<=row;i++,k=0)
    {
        for(sp=1;sp<=(row-i);sp++)
            {printf(" ");}
        while(k!=2*i-1)
        {
            printf("*");
            ++k;

        }
        printf("\n");
    }
    return 0;
}
