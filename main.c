#include <stdio.h>
#include "./headerfiles/00.h"
#include "./headerfiles/01.h"
#include "./headerfiles/02.h"
#include "./headerfiles/03.h"
#include "./headerfiles/04.h"
#include "./headerfiles/05.h"
#include "./headerfiles/06.h"
#include "./headerfiles/07.h"
#include "./headerfiles/08.h"
#include "./headerfiles/09.h"
#include "./headerfiles/10.h"
#include "./headerfiles/11.h"
#include "./headerfiles/12.h"
#include "./headerfiles/13.h"
#include "./headerfiles/14.h"
#include "./headerfiles/15.h"
#include "./headerfiles/16.h"
#include "./headerfiles/17.h"
#include "./headerfiles/18.h"
#include "./headerfiles/19.h"
#include "./headerfiles/20.h"
#include "./headerfiles/21.h"
#include "./headerfiles/22.h"
#include "./headerfiles/23.h"
#include "./headerfiles/24.h"
#include "./headerfiles/25.h"
#include "./headerfiles/26.h"
#include "./headerfiles/27.h"
#include "./headerfiles/28.h"
#include "./headerfiles/29.h"
#include "./headerfiles/30.h"

void main()
{
  int ch;
  printf("List of Programs:\n00. Program to find a sum of two numbers(Example)\n");
  printf("01. Count distinct elements of an array\n02. Program to convert string from lower case to upper case\n03. Sort a set of strings in ascending alphabetical order\n04. Find length of a string without using strlen()\n05. String concatenation without using strcat\n06. Reverse a String using recursion\n");
  printf("07. Program to sort array in ascending order\n08. Find largest element of given array\n09. Program to find sum of array elements\n10. Program to find number of elements in an array\n");
  printf("11. Program to find the largest of three numbers using Pointers\n12. Program to count vowels and consonants in a String using pointer\n13. Program to print String using Pointer\n14. Program to swap two numbers using pointers\n15. Program to create initialize and access a pointer variable\n");
  printf("16. Find the value of nPr for given value of n & r\n17. Find the value of nCr for given value of n & r\n18. Program to multiply two floating numbers\n19. Program to find out Quotient and Remainder\n20. Program to find average of two numbers\n");
  printf("21. Program to Add Two Matrices Using Multi-dimensional Arrays\n22. Program to Multiply Two Matrices Using Multi-dimensional Arrays\n23. Program Swap Numbers in Cyclic Order Using Call by Reference\n24. Program to Find Largest Number Using Dynamic Memory Allocation\n25. Program to Sort Elements in Lexicographical Order (Dictionary Order)\n");
  printf("26. Program to Calculate Difference Between Two Time Periods\n27. Program to Display its own Source Code as Output\n28. Matrix rotation by 90 degrees clockwise and anticlockwise\n29. Saddle point coordinates of a given matrix\n30. Matrix printing in aspiral form\n");
  printf("Select your program number from above: ");
  scanf("%d", &ch);
  switch (ch)
  {
  case 0:
  {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Sum of %d and %d is %d\n", x, y, sum(x, y));
    break;
  }
  case 1:
  {
    int n;
    printf("\nEnter the size of an array\n");
    scanf("%d",&n);
    int A[n];
    printf("\nEnter the values of an array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    printf("\nDistinct Elements count: %d\n",Array_count_distinct(A,n));
    break;
  }
  case 2:
  {
    char s[100];
    printf("\nEnter a string : ");
    scanf("\n%[^\n]%*c", s);
    toUpper(s);
    break;
  }
  case 3:
  {
    break;
  }
  case 4:
  {
    char input_str[50];
    int length;
    printf("\n Enter any string\n");
    gets(input_str);
    puts(input_str);
    length = length_of_string(input_str);
    printf("\n The length of the input string is  : %d\n",length);
    
    break;
  }
  case 5:
  {
    break;
  }
  case 6:
  {
    break;
  }
  case 7:
  {
    int a[100],n;
    printf("\nEnter size of the array");
    scanf("%d",&n);
    printf("Enter the elements :");
    for(int i=0;i<=n;i++)
        scanf("%d",&a[i]);
    Sort_ele(n,a);
    break;
  }
  case 8:
  {
    int a[100],n,i;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter %d elements :",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    largest(a,n);
    break;
  }
  case 9:
  {
    int n,a[100];
    printf("enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(int i = 0 ; i<n;i++){
        scanf("%d",&a[i]);
    }
    sum_elements(n,a);
    break;
  }
  case 10:
  {
    break;
  }
  case 11:
  {
    int num1, num2, num3;
    //taking input from user
    printf("Enter First Number: ");
    scanf("%d",&num1);
    printf("Enter Second Number: ");
    scanf("%d",&num2);
    printf("Enter Third Number: ");
    scanf("%d",&num3);
    //calling the header function
    largestOfThree(num1, num2, num3);
    break;
  }
  case 12:
  {
    break;
  }
  case 13:
  {
    break;
  }
  case 14:
  {
    int num1,num2;
    printf("Enter value of num1: ");
    scanf("%d",&num1);
    printf("Enter value of num2: ");
    scanf("%d",&num2);
    //displaying numbers before swapping
    printf("Before Swapping: num1 is: %d, num2 is: %d\n",num1,num2);
    //calling the user defined function swap()
    swapusingpointer(&num1,&num2);
    //displaying numbers after swapping
    printf("After  Swapping: num1 is: %d, num2 is: %d\n",num1,num2);
    break;
  }
  case 15:
  {
    break;
  }
  case 16:
  {
  	int n,r;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter r:");
    scanf("%d",&r);
    printf("%dP%d=%d\n",n,r,permutation(n,r));
    break;
  }
  case 17:
  {
    int n, r, nCr;
    printf("Enter the value for n and r : ");
    scanf("%d%d", &n, &r);
    nCr = fact(n)/(fact(r)*fact(n-r));
    printf("\nThe value of nCr is: %d", nCr);
    break;
  }
  case 18:
  {
    float num1,num2;
    printf("Enter value of num1: ");
    scanf("%f",&num1);
    printf("Enter value of num2: ");
    scanf("%f",&num2);
    //calling the user defined function findAverage
    double pruduct = findProduct(num1,num2);
    //displaying the average
    printf("Product of %f and %f is %lf\n",num1,num2, pruduct);
    break;
  }
  case 19:
  {
    int num1,num2;
    printf("Enter value of num1: ");
    scanf("%d",&num1);
    printf("Enter value of num2: ");
    scanf("%d",&num2);
    //displaying numbers entered by user
    printf("Before Swapping: num1 is: %d, num2 is: %d\n",num1,num2);
    //calling the user defined function findAverage
    double average = findAverage(num1,num2);
    //displaying the average
    printf("Average of %d and %d is %lf\n",num1,num2, average);
    break;
  }
  case 20:
  {
    int n1, n2;
    printf("Enter first number: ");
    scanf("%d",&n1);
    printf("Enter second number: ");
    scanf("%d",&n2);
    avg(n1,n2);
    break;
  }
  case 21:
  {
    break;
  }
  case 22:
  {
   int first[10][10], second[10][10], result[10][10], r1, c1, r2, c2;
   printf("Enter rows and column for the first matrix: ");
   scanf("%d %d", &r1, &c1);
   printf("Enter rows and column for the second matrix: ");
   scanf("%d %d", &r2, &c2);
   // Taking input until
   // 1st matrix columns is not equal to 2nd matrix row
   while (c1 != r2) 
   {
      printf("Error! Enter rows and columns again.\n");
      printf("Enter rows and columns for the first matrix: ");
      scanf("%d%d", &r1, &c1);
      printf("Enter rows and columns for the second matrix: ");
      scanf("%d%d", &r2, &c2);
   }
   // get elements of the first matrix
   getMatrixElements(first, r1, c1);
   // get elements of the second matrix
   getMatrixElements(second, r2, c2);
   // multiply two matrices.
   multiplyMatrices(first, second, result, r1, c1, r2, c2);
   // display the result
   display(result, r1, c2);
    break;
  }
  case 23:
  {
    break;
  }
  case 24:
  {
    break;
  }
  case 25:
  {
    break;
  }
  case 26:
  {
    break;
  }
  case 27:
  {
    break;
  }
  case 28:
  {
    break;
  }
  case 29:
  {
    break;
  }
  case 30:
  {
    break;
  }
  default:
    printf("Invalid Input. Try Again!\n");
    break;
  }
}
