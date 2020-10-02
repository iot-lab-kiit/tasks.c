#include<stdio.h>
//This is call by reference. Calling the function will chnage the real values of the string
void change_case(char *str)
{
    for(int i=0;i<strlen(str);i++)
    if(str[i]>=97&&str[i]<=122)
    str[i]-=32;
}
