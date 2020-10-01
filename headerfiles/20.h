#include<stdio.h>
#include<stdlib.h>

int **addMatrices(int rows,int columns,int array1[][columns],int array2[][columns]){
    int **array3;
    array3 = malloc(sizeof(int*)*columns);
    for(int i = 0; i < 3; i++) {
        array3[i] = malloc(sizeof(int*) * rows);
    }
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            array3[i][j] = array1[i][j] + array2[i][j];
        }
    }
    return array3;
}
