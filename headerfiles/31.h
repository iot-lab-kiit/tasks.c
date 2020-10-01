#include <stdio.h>
void MeanMedian()
{
	int i,ar[50],n,temp,j,index,max=0;
	float sum=0;
	printf("Enter the no. of elements:");
	scanf("%d",&n);
    	printf("Enter the elements:");
	for(i=0;i<n;i++)
    	scanf("%d",&ar[i]);
   	 printf("Array:\n");
	for(i=0;i<n;i++)
    	printf("%d ",ar[i]); 
//Mean  
	for(i=0;i<n;i++)
	{   
    	temp=0;
    	sum+=ar[i];
 	}
 	printf("\nMean = %f\n",(float)sum/n);
	 //Median
 	for(i=0;i<n-1;i++)
    	for(j=0;j<n-i-1;j++)
        	if(ar[j]>ar[j+1])
        	{
        	temp=ar[j];
        	ar[j]=ar[j+1];
        	ar[j+1]=temp;
        	}
 	if(n%2==0)
    	{printf("Median = %d & %d\n",ar[(n-1)/2],ar[((n-1)/2)+1]);}
 	else
    	{printf("Median = %d\n",ar[((n-1)/2)]);}
  	 }
