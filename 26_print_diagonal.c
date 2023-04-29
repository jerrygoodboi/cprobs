#include <stdio.h> 
int main(){
	int order;
	printf("Enter the order of the matrix:");
	scanf("%d",&order);
	int ar[order][order];
	printf("Enter the elements of the matrix:\n");
	for(int i=0;i<order;i++){
		for(int j=0;j<order;j++){
		scanf("%d",&ar[i][j]);
		}
	}
	for(int i=0;i<order;i++){
		printf("%d ",ar[i][i]);
	}
	printf("\n");
}
