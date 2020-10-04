#include<stdio.h>

//Function to input the matrix from the user
void inputMatrix(int * matrix, int row, int column)
{
   printf("\nEnter elements: \n");
   for (int i = 0; i < row; ++i)
      for (int j = 0; j < column; ++j)
      {
         printf("Enter a[%d][%d]: ", i + 1, j + 1);
         scanf("%d", &matrix[(i*column)+j]);
      }
}

//Function to print a given matrix
void printMatrix(int * matrix, int row, int column)
{
   for (int i = 0; i < row; ++i)
        for (int j = 0; j < column; ++j)
        {
            printf("%d  ", matrix[(i*column)+j]);
            if (j == column - 1)
            printf("\n");
        }
}

//Function to find the clockwise rotated matrix
void findClockwiseMatrix(int * matrix, int * clockwise, int row, int column)
{
    for(int i=0; i<column; i++) {
	for(int j=0; j<row; j++) {
	    clockwise[(i*row)+j]=matrix[((row-1-j)*column)+i];
	}
    }
}

//Function to find the antilcokwise rotated matrix
void findAntiClockwiseMatrix(int * matrix, int * aclockwise, int row, int column)
{
    for(int i=0; i<column; i++) {
	for(int j=0; j<row; j++) {
	    aclockwise[(i*row)+j]=matrix[(j*column)+(column-1-i)];
	}
    }
}
