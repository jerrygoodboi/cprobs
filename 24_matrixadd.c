#include <stdio.h> 
#define COLS 3
#define ROWS 3
int main(){
int mat1[ROWS][COLS];
int mat2[ROWS][COLS];
	printf("Enter the values of the first 3x3 matrix\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("Enter the values of the second 3x3 matrix\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&mat2[i][j]);
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			mat1[i][j]+=mat2[i][j];
		}
	}
	printf("Sum of the two matrices\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%5d ",mat1[i][j]);
		}
		printf("\n");
	}
}
