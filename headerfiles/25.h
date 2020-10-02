#include<stdio.h>
#include<string.h>

//Function to input the words from the user
void getWords(char stringMatrix[][100], int n)
{
   printf("\nEnter the words: \n");
   for (int i = 0; i < n; ++i)
      scanf("%s[^\n]",stringMatrix[i]);
}

//Function to swap two words
void swap(char s1[], char s2[]) 
{ 
    char temp[100];
    strcpy(temp, s1);
    strcpy(s1, s2);
    strcpy(s2, temp);
}

//Function to sort the words in lexicographical order
void sortWords(char stringMatrix[][100], int n)
{
    for (int i = 0; i < n-1; ++i) 
      for (int j = i + 1; j < n; ++j)
         if (strcmp(stringMatrix[i], stringMatrix[j]) > 0)
            swap(stringMatrix[i],stringMatrix[j]);
}

//Function to print the words sorted in lexicographical order
void printWords(char stringMatrix[][100],int n)
{
    printf("\nThe words sorted in lexicographical order are: \n");
    for (int i = 0; i < n; ++i)
        puts(stringMatrix[i]);
}