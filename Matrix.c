#include<stdio.h>

int main(){
	int rows=3,cols=3;
	int matrix[rows][cols];
	int i,j;
	int sum=0;
	printf("Input the elements of the 3x3 matrix : \n");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			int *row_ptr = matrix[i];
			printf("\nElement - [%d][%d] : ",i,j);
			scanf("%d",&row_ptr[j]);
		}
	}
	printf("\nThe Matrix is : \n");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			int *row_ptr = matrix[i];
			printf("[%d]",row_ptr[j]);
			if(i==j){
				sum+=row_ptr[j];
			}
		}
		printf("\n");
	}
	printf("\nThe sum of principle diagonal elements is : %d",sum);
	return 0;
}
