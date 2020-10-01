#include<stdio.h>
#include<string.h>
void countVC(char *ptr){
	int  v=0,c=0,space=0;
	while(*ptr!='\0')
    {
        if(*ptr=='A' ||*ptr=='E' ||*ptr=='I' ||*ptr=='O' ||*ptr=='U'
        		||*ptr=='a' ||*ptr=='e' ||*ptr=='i' ||*ptr=='o' ||*ptr=='u')
            v++;
		else{
			if(*ptr!=' ')
				c++;
		}
        ptr++;
    }
    printf("Number of vowels= %d\nNumber of Consonants=%d",v,c);
}