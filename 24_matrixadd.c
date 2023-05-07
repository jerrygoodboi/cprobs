//21 pgm to add two matrices 
#include <stdio.h> 
int main(){
	int size;
	printf("Enter the order of the matrix:");
	scanf("%d",&size);
	int mat1[size][size];
	int mat2[size][size];
	printf("Enter the values of the first %dx%d matrix\n",size,size);
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("Enter the values of the second %dx%d matrix\n",size,size);
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			scanf("%d",&mat2[i][j]);
		}
	}
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			mat1[i][j]+=mat2[i][j];
		}
	}
	printf("Sum of the two matrices\n");
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			printf("%5d ",mat1[i][j]);
		}
		printf("\n");
	}
}
