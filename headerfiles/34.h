#include <stdio.h>
#include <string.h>
void dictionary_i(char str[][50],int n) {

    char temp[50];
   // storing strings in the lexicographical order
   for (int i = 0; i < n-1; ++i) {
      for (int j = i + 1; j < n; ++j) {

         // swapping strings if they are not in the lexicographical order
         if (strcmp(str[i], str[j]) > 0) {
            strcpy(temp, str[i]);
            strcpy(str[i], str[j]);
            strcpy(str[j], temp);
         }
      }
   }

   printf("\nIn the lexicographical order: \n");
   for (int i = 0; i < 5; ++i) {
      
        puts(str[i]);
   }
}