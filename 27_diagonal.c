//prgm by eldhose
//sum of diagonal elements of a metrix

#include<stdio.h>
int main(){
int sum=0, row,col,i,j;
printf("Enter Rows of a metrix : ");
scanf("%d",&row);
printf("Enter col of a metrix : ");
scanf("%d",&col);
int ar[row][row];
printf("Enter elements one by one \n");

for(i=0;i<row;i++){
        for(j=0;j<col;j++){
                scanf("%d",&ar[i][j]);
        }
}

for (i = 0; i < row; i++) {
   for (j = 0; j < col; j++) {
        if (i == j) {
            sum += ar[i][j];
    }
}
}

printf("You enterd matrix is:\n\n");
    for (i = 0; i < col; i++) {
        for (j = 0; j < row; j++) {
            printf("%d\t", ar[i][j]);
        }
        printf("\n\n");
    }
printf("Sum of diagonal elements is : %d\n",sum);
}
