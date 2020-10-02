#include<stdio.h>
void referenceSwap(int *a,int *b,int *c){
    int temp=0;
    temp = *b;
    *b = *a;
    *a = *c;
    *c = temp;
}