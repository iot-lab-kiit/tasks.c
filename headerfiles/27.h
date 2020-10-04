#include <stdio.h> 
int main()
{
    FILE *f;
    char ch;
    f = fopen(__FILE__,"r");
    while (ch != EOF)
    {
        ch = getc(f);
        putchar(ch);
    }    
	fclose(f); 
}
