#include <stdio.h>
#include<string.h>
int main()
{
  char s[100];
  int c = 0;

  printf("enter a string: \n");
  gets(s);

  while (s[c] != '\0')
    c++;

  printf("Length of the string is: %d\n", c);

  return 0;
}