#include<stdio.h>

 /* Finding the minimum element n-1 times and then compare it with the first element of the array. if it is less than first element then swap the current number with the first number of the array. */

 /*Selection sort algorithm */


void Sort_ele(int n,int arr[])
{
    int i, j, min_idx;
    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;
         int temp = arr[min_idx];
		 arr[min_idx]=arr[i];
		 arr[i]= temp;
    }


printf("The numbers arranged in ascending order is given below :\n");
    for(int i=0;i<n;i++)
    {
      printf("%d ",arr[i]);
    }
}
