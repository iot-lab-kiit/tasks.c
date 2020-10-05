//counting number of distinct elements in the array


#include <stdio.h> 
  
int countDistinct(int arr[], int n) 
{ 
    int r = 1; 
  
   
    for (int i = 1; i < n; i++) { 
        int j = 0; 
        for (j = 0; j < i; j++) 
            if (arr[i] == arr[j]) 
                break; 
  
        
        if (i == j) 
            r++; 
    } 
    return r; 
} 


int main() 
{ 
    int arr[100],n;
    printf("enter how many elements you want to insert \n");

    scanf("%d",&n);

printf("enter the elements of the array \n");

for(int i=0; i<n; i++)

{

scanf("%d",&arr[i]);

}
  printf(" Number of distinct elements in the array is \n");

    printf("%d",countDistinct(arr, n)); 
    return 0; 
}