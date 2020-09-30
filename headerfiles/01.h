#include <stdio.h>
void Array_distinct(){
    int n,val,M[10000],k=0;
    printf("\nEnter the size of an array\n");
    scanf("%d",&n);
    int A[n];
    printf("\nEnter the values of an array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&val);
        if(M[val]!=1){
            A[k]=val;
            M[val]=1;
            ++k;
        } 
    }
    printf("Array:\t");
    for(int i=0;i<k;i++){
        printf("%d\t",A[i]);
    }
}