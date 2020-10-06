//JUST TYPE " GET_SRC_CODE; " (CAPS)  TO USE IT AFTER INCLUDE THIS FILE

#include <stdio.h>
#define CODE __FILE__
#define GET_SRC_CODE printOwnCode(CODE);

void printOwnCode(char *ch)
{
    //GETTING THE FILE LOCATION FROM WHERE IT WILL BE CALLED
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
