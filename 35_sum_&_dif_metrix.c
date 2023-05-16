//prgm by eldhose
//to find the sum and difference of two metrix

#include<stdio.h>
#define ROWS 3
#define COLS 3
int main(){
    int mat1[ROWS][COLS] , mat2[ROWS][COLS];
    int summat[ROWS][COLS] , diffmat[ROWS][COLS];

	printf("Enter the values of the first 3x3 matrix\n");
	
    for(int i=0;i<ROWS;i++){
		for(int j=0;j<COLS;j++){
			scanf("%d",&mat1[i][j]);
		}
	}

	printf("Enter the values of the second 3x3 matrix\n");
	for(int i=0;i<ROWS;i++){
		for(int j=0;j<COLS;j++){
			scanf("%d",&mat2[i][j]);
		}
	}

	for(int i=0;i<ROWS;i++){
		for(int j=0;j<COLS;j++){
			summat[i][j]=mat1[i][j]+mat2[i][j];
		}
	}

    for(int i=0;i<ROWS;i++){
		for(int j=0;j<COLS;j++){
			diffmat[i][j]=mat1[i][j]-mat2[i][j];
		}
	}

	printf("Sum of the two matrices\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%5d ",summat[i][j]);
		}
		printf("\n");
	}

    printf("differnce of the two matrices\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%5d ",diffmat[i][j]);
		}
		printf("\n");
	}
}