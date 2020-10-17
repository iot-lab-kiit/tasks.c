#include <stdio.h>
void concat_str(char* str1,char* str2)
{
   int j,length;
   
length=0;

  while (str1[length] != '\0') {
    ++length;
  }

  // concatenate str2 to str1

  for (j = 0; str2[j] != '\0'; ++j, ++length) {
    str1[length] = str2[j];
  }

  // terminating the str1 string

  str1[length] = '\0';

  printf("After concatenation: \n");
  printf("%s",str1);

  return 0;
}
