#include <stdio.h>


int actionsonpointer()
{
    char ch;

    // pointer
    char *chP;

    // Initialize pointer variable with the address of ch variable
    chP = &ch;

    // Assigning the letter 'S' to ch
    ch = 'S';

    // Access the value and address using ch
    printf("Value of ch is %c\n", ch);
    printf("Address of ch is %p\n", &ch);

    // Access the value and address using pointer variable chP
    printf("Value of ch pointer is: %c\n", *chP);
    printf("Address of ch pointer is %p\n", chP);

   return 0;
}
