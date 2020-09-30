#include<stdio.h>
int main()
{
printf("Enter Size of Array");
int a; scanf("%d",&a);
int arr[a];
for(int i=0;i<a;i++)
{scanf("%d",&arr[i]);
}

int i, j; 
   for (i = 0; i < a-1; i++)       
       for (j = 0; j < a-i-1; j++)  
           if (arr[j] > arr[j+1]) 
              {int temp=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;
              }
printf("Array in ascending order is:");
for(i=0;i<a;i++)
printf("%d ",arr[i]);
printf("\n");

}
