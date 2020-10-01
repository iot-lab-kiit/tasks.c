#include<stdio.h>
#include<string.h>
int countVowels(char *ptr){
    int vowel_count = 0;
 	while(*ptr)
    {
    	if( (*ptr>=65 && *ptr<=90) || (*ptr>=97 && *ptr<=122))
    	{

            if(*ptr=='a'|| *ptr=='e'||*ptr=='i'||*ptr=='o'||*ptr=='u'||*ptr=='A'||*ptr=='E'||*ptr=='I'||*ptr=='O' ||*ptr=='U')
		      vowel_count++;
        }
        ptr++;
 	}
    return vowel_count;
}

    
    