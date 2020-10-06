#include<stdio.h>

void print_matrix_aspiral(int * matrix, int row, int column) {
    int i, k=0, l=0, count=0, num, row_temp=row, col_temp=column, size=row*column;
    int array[size];
    while(k<row_temp && l<col_temp) {
        for(i=l; i<col_temp; i++) { 
            num=matrix[(k*column)+i];
            array[count]=num; 
            count++; 
        } 
        k++;
        for(i=k; i<row_temp; i++) { 
            num=matrix[(i*column)+col_temp-1];
            array[count]=num; 
            count++; 
        } 
        col_temp--;
        if(k<row_temp) { 
            for(i=col_temp-1; i>=l; i--) {  
                num=matrix[((row_temp-1)*column)+i];
                array[count]=num; 
                count++; 
            } 
            row_temp--; 
        } 
        if(l<col_temp) { 
            for(i=row_temp-1; i>=k; i--) { 
		num=matrix[(i*column)+l];
                array[count]=num; 
                count++; 
            } 
            l++; 
        } 
    } 
    for (i=size-1; i>=0; i--) { 
        printf("%d ", array[i]); 
    }
    printf("\n");
}
