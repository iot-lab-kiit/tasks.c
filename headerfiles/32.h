#include<stdio.h>
void pascal(int row)
{   
    int i,sp,j,coe=1;
    for(i=0;i<row;i++)
    {
        for(sp=1;sp<=(row-i);sp++)
            {printf(" ");}
        for(j=0;j<=i;j++)
        {
            if(i==0 || j==0)
                coe=1;
            else
                coe=coe*(i-j+1)/j;
            printf("%d ",coe);

        }
        printf("\n");
    }
}
