#include<stdio.h>
void Sort_ele(int n, int a[])
{
  for (i = 0; i < (n - 1); i++) 
  {
    pos = i;               /* Finding the minimum element n-1 times and then compare it with the first element of the array. if it is less than first element then swap the current number with the first number of the array. */
      
    for (j = i + 1; j < n; j++)        /*Selection sort algorithm */
    {
      if (a[pos] > a[j])
        pos = j;
    }
    if (pos != i)
    {
      t = a[i];
      a[i] = a[pos];
      a[pos] = t;
    }
  }
    
printf("The numbers arranged in ascending order is given below :\n");
    for(int i=0;i<=n;i++)
        printf("%d\n",a[i]);
}
