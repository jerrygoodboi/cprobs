#include <stdio.h> 
#define pr printf
int main(){
	int order;
	pr("Enter the order of the matrix:");
	scanf("%d",&order);
	int ar[order][order];
	for(int i=0;i<order;i++){
		for(int j=0;j<order;j++){
			scanf("%d",&ar[i][j]);
		}
	}
	for(int i=0;i<order;i++){
		for(int j=i;j<order;j++){
			pr("%d ",ar[i][j]);
		}
	pr("\n");
	}
}
