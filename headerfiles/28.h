#include<stdio.h>

//Function to input the matrix from the user
void inputMatrix(int matrix[][10], int row, int column)
{
   printf("\nEnter elements: \n");
   for (int i = 0; i < row; ++i)
      for (int j = 0; j < column; ++j)
      {
         printf("Enter a[%d][%d]: ", i + 1, j + 1);
         scanf("%d", &matrix[i][j]);
      }
}

//Function to print a given matrix
void printMatrix(int matrix[][10], int row, int column)
{
   for (int i = 0; i < row; ++i)
        for (int j = 0; j < column; ++j)
        {
            printf("%d  ", matrix[i][j]);
            if (j == column - 1)
            printf("\n");
        }
}

//Function to swap two integers
void swap(int *a, int *b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
}

//Function to find the transpose of a matrix
void findTranspose(int matrix[][10], int transpose[][10],int row, int column)
{
    for(int i=0;i<row;i++)
        for(int j=0;j<column;j++)
            transpose[j][i] = matrix[i][j];
}

//Function to find the clockwise rotated matrix
void findClockwiseMatrix(int matrix[][10], int clockwise[][10],int row, int column)
{
    findTranspose(matrix,clockwise,row,column);
    for(int i=0;i<column;i++)
        for(int j=0;j<row/2;j++)
            swap(&clockwise[i][j], &clockwise[i][row-j-1]);            
}

//Function to find the antilcokwise rotated matrix
void findAntiClockwiseMatrix(int matrix[][10], int aclockwise[][10],int row, int column)
{
    findTranspose(matrix,aclockwise,row,column);
    for(int i=0;i<column/2;i++)
        for(int j=0;j<row;j++)
            swap(&aclockwise[i][j], &aclockwise[column-i-1][j]);              
}
