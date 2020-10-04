#include <stdio.h>
int main() {
    FILE *file;
    int ch;

    file = fopen(__FILE__,"r"); // opens the input file

    do {
        ch = getc(file);   // this reads the characters 
        putchar(ch);     // this displays the characters
    } while(ch != EOF);  // this will loop until EOF is reached
    
    fclose(file);
    return 0;
}
