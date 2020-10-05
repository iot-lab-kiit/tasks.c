

#include <stdio.h>
#include<string.h>

int main()
{
char s[100];
int i;

printf("enter the string of which we want to find the length: \n");

scanf("%s",s);

for(i = 0; s[i]!="\0"; i++);

printf("length of the given string is: %d ",i);
return 0;
}