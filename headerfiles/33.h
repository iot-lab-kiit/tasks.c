#include <stdio.h>
#define CODE __FILE__

void printOwnCode(char *ch)
{
    FILE *f = (FILE *)ch;
    int c;

    //OPEN THE CURRENT FILE IN READ MODE
    f = fopen(ch, "r");

    while (c != EOF)
    {
        c = getc(f);
        putchar(c);
    }

    fclose(f);
}
