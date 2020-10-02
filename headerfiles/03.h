#include <stdio.h>
#include <string.h>

//the function does not return any values. Hence, void.
void StringSort(char str[30][40], int num) {

	char temp[30];

       //Logic for sorting array of strings

     	  for (int outer = 0; outer < num; outer++) {			// Outer for Outer Loop

		  for (int inner = outer + 1; inner < num; inner++) {	//Inner for Inner Loop

	      		  if (strcmp(str[outer], str[inner]) > 0) {

				  strcpy(temp, str[outer]);

		  		  strcpy(str[outer], str[inner]);

		  		  strcpy(str[inner], temp);

			  }

		  }

	  }

       	  // print the strings after sort

	  printf("The Strings after Sorting:\n");

	  for(int loop = 0; loop < num; loop++) {

		  printf("%s\n",str[loop]);

	  }

}
