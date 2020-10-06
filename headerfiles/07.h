#include<stdio.h>

 /* Finding the minimum element n-1 times and then compare it with the first element of the array. if it is less than first element then swap the current number with the first number of the array. */
      
 /*Selection sort algorithm */

void Sort_ele(int n, int a[])
{
 int temp;
  
     for(i=0; i<n; i++){
       
      for(j=i+1; j<n ;j++){
        
         if(a[i]>a[j]){
           
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
           
         }
      }
   }
  
  
    
printf("The numbers arranged in ascending order is given below :\n");
    for(int i=0;i<=n;i++)
    {
      printf("%d",a[i]);
    }
}
  
