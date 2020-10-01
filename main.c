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
#include "./headerfiles/31.h"

void main()
{
  int ch;
  printf("List of Programs:\n00. Program to find a sum of two numbers(Example)\n");
  printf("01. Count distinct elements of an array\n02. Program to convert string from lower case to upper case\n03. Sort a set of strings in ascending alphabetical order\n04. Find length of a string without using strlen()\n05. String concatenation without using strcat\n06. Reverse a String using recursion\n");
  printf("07. Program to sort array in ascending order\n08. Find largest element of given array\n09. Program to find sum of array elements\n10. Program to find number of elements in an array\n");
  printf("11. Program to find the largest of three numbers using Pointers\n12. Program to count vowels and consonants in a String using pointer\n13. Program to print String using Pointer\n14. Program to swap two numbers using pointers\n15. Program to create initialize and access a pointer variable\n");
  printf("16. Find the value of nPr for given value of n & r\n17. Find the value of nCr for given value of n & r\n18. Program to multiply two floating numbers\n19. Program to find out Quotient and Remainder\n20. Program to find average of two numbers\n");
  printf("21. Program to Add Two Matrices Using Multi-dimensional Arrays\n22. Program to Multiply Two Matrices Using Multi-dimensional Arrays\n23. Program Swap Numbers in Cyclic Order Using Call by Reference\n24. Program to Find Largest Number Using Dynamic Memory Allocation\n25. Program to Sort Elements in Lexicographical Order (Dictionary Order)\n");
  printf("26. Program to Calculate Difference Between Two Time Periods\n27. Program to Display its own Source Code as Output\n28. Matrix rotation by 90 degrees clockwise and anticlockwise\n29. Saddle point coordinates of a given matrix\n30. Matrix printing in aspiral form\n31 Mean and Median of an unsorted array");
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
   char str1[50], str2[50];
   printf("\nEnter first string: ");
   scanf("%s",str1);
   printf("\nEnter second string: ");
   scanf("%s",str2);
   concat_str(str1,str2);
    break;
  }
  case 6:
  {
    char f[100];
    printf("Enter a string :- ");
    gets(f);
    printf("The reverse of the string is :- ");
    rev(f, 0, strlen(f)-1);
    printf("%s\n", f);
    break;
  }
  case 7:
  {
    break;
  }
  case 8:
  {
    break;
  }
  case 9:
  {
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
    char s[1000];  
    int vowels=0;
    printf("Enter  the string :- ");
    gets(s);
    vowels = countVowels(s);
    printf("The Number of Vowels in the string :- %d\nThe Number of Consonants in the string :- ",vowels,abs(vowels - strlen(s)));
    printf("\n");
    break;
  }
  case 13:
  {
    char s[1000];
    printf("Enter  the string :- ");
    gets(s);
    printf("The string is :- ");
    display_str(s);
    printf("\n");
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
    break;
  }
  case 21:
  {
    break;
  }
  case 22:
  {
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
    struct time start, stop, diff;
    printf("Enter hours, minutes and seconds of start time: ");
    scanf("%d%d%d", &start.hours,&start.minutes, &start.seconds);
    printf("Enter hours, minutes and seconds of stop time: ");
    scanf("%d%d%d", &stop.hours,&stop.minutes, &stop.seconds);
    timeDiff(start,stop,diff);
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
	  int rows,columns;
	  printf("Enter the number rows matrix ");
	  scanf("%d",&rows);
	  printf("Enter the number columns matrix ");
	  scanf("%d",&columns);
	  int a[rows][columns];
	  for(int i=0;i<rows;i++){
		  for(int j=0;j<columns;j++){
			  scanf("%d",&a[i][j]);
		  }
	  }
	  int result=getSadlePoint(rows,columns,a);
	  printf("The saddle point of given matrix is %d",result);
    break;
  }
  case 30:
  {
    break;
  }
  case 31:
      MeanMedian();
      break;
  default:
    printf("Invalid Input. Try Again!\n");
    break;
  }
}
