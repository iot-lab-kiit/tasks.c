#include<stdio.h>
#include<string.h>
int length_of_string(char *s)
{
  int count = 0;
  while(*s != '\0') {
    count++;
    s++;
    }
   return count;
  }
