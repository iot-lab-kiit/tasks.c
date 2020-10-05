#include <stdio.h>
int Array_count_distinct(int A[],int n){
    int M[10000];
    int count=0;
    for(int i=0;i<n;i++){
        if(M[A[i]]!=1){
            M[A[i]]=1;
            ++count;
        } 
    }
    return count;
}
