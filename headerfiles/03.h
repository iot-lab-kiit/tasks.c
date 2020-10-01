#include <stdio.h>
#include <string.h>
#define MAX 100

void sortArray(char arr[][MAX], int n)
{
	int i, j, min;
	char min_element[MAX],temp[MAX];;
	for (i = 0; i < n-1; i++)
	{
	    min = i;
		strcpy(min_element, arr[i]);
		for (j = i+1; j < n; j++)
		{
			if (strcmp(min_element, arr[j]) > 0)
			{
				strcpy(min_element, arr[j]);
				min = j;
			}
		}

		strcpy(temp, arr[i]);
		strcpy(arr[i], arr[min]);
		strcpy(arr[min], temp);
	}
}
