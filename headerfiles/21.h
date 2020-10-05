#include <stdio.h>
void addMultidimentionalArray(int* mat1,int* mat2,int r, int c){
	int resultMatrix[r][c],i,j;
        for(i=0;i<r;i++){
    	for(j=0;j<c;j++)
    		resultMatrix[i][j]=*((mat1+i*c) + j)+*((mat2+i*c) + j); 
	}
	printf("The resultant matrix is: \n");
	for(i=0;i<r;i++){
    	for(j=0;j<c;j++)
    		printf("%d ",resultMatrix[i][j]);
    	printf("\n");
	}
}
