#include <stdio.h>
#include <string.h>

/*This function takes the array of strings and number of strings as input
 *It does not return any values, only sorts and prints the entered strings in alphabetic order
 */
void StringSort(char str[100][100], int n)
{

	char temp[100];
	int i, j;

	//Sorting the array of strings using bubble sort
	
	int flag = -1;	//Used to exit the loop early if the array is sorted before n iterations
	for (i = 0; i<n && flag!=0; i++)			
	{ 
		flag = 0;	//Reset flag for each iteration
		for (j = 0; j < n-i-1; j++)
		{ 

			if ( strcmp(str[j], str[j+1]) > 0 )
			{
				//swap str[i] and str[j]
				strcpy(temp, str[j]);
				strcpy(str[j], str[j+1]);
				strcpy(str[j+1], temp);

				flag = 1; 
			}
		}
	}

	//Print the strings after sorting
	printf("\n\nThe Strings after Sorting:\n");
	for (i = 0; i < n; i++)
		printf("%s \n", str[i]);
}
