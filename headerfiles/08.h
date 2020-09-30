#include <stdio.h>
int find_maximum(int[], int);

// Main() function
int main() 
{
  int c, array[100], size, location, maximum;

  printf("Input number of elements in array\n");
  scanf("%d", &size);

  printf("Enter %d integers\n", size);

  for (c = 0; c < size; c++)
    scanf("%d", &array[c]);

  // finds the location of the greatest number in the array
  location = find_maximum(array, size);
  
  //helps in getting the largest number from the specified location and stores it
  maximum  = array[location];

  printf("Largest element value is = %d.\n",maximum);
  return 0;
}

// The function for finding the largest number in the array
int find_maximum(int a[], int n) 
{
  int c, index = 0;
  for (c = 1; c < n; c++)
    if (a[c] > a[index])
      index = c;
  return index;
}
