//prog by eldhose
//to find transpose of a metrix

#include<stdio.h>
int main(){
int row,col,i,j;
printf("Enter Rows of a metrix : ");
scanf("%d",&row);
printf("Enter col of a metrix : ");
scanf("%d",&col);
int ar[row][col],tra[col][row];
printf("Enter elements one by one \n");

for(i=0;i<row;i++){
	for(j=0;j<col;j++){
		scanf("%d",&ar[i][j]);
	}
}

for(i=0;i<col;i++){
	for(j=0;j<row;j++){
		tra[i][j]=ar[j][i];
	}
}

printf("You enterd matrix is:\n\n");
    for (i = 0; i < col; i++) {
        for (j = 0; j < row; j++) {
            printf("%d\t", ar[i][j]);
        }
        printf("\n\n");
    }

printf("\n\n");
printf("The transpose of the matrix is:\n\n");
    for (i = 0; i < col; i++) {
        for (j = 0; j < row; j++) {
            printf("%d\t", tra[i][j]);
        }
        printf("\n\n");
    }
printf("\n\n");
}
