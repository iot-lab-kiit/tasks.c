#include<stdio.h>
void printOwnCode()
{
FILE *fp;
char c;
fp= fopen(__FILE__,"r");
do {
c = getc(fp);
putchar(c);
}
while(c != EOF);
fclose(fp);
}
