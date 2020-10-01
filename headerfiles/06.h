#include<stdio.h>
void revString(){
    char c;
    scanf("%c", &c);
    if ( c != '\n'){
        revString();
        printf("%c", c);
    }
}
