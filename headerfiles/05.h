#include <stdio.h>
void concat_str(char* str1,char* str2)
{
   int i,j;
   for(i=0; str1[i]!='\0'; ++i);

   for(j=0; str2[j]!='\0'; ++j, ++i)
   {
      str1[i]=str2[j];
   }
   str1[i]='\0';
   printf("\nOutput: %s",str1);

}
