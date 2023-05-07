#include <stdio.h> 
#define pr printf
#define sc scanf
float ravg(int *ar,int size){
	float val=0;
	for(int i=0;i<size;i++){
		val += *(ar+i);
	}
	return val / size;
}
int main(){
	int order;
	float avg;
	pr("Enter the order of the matrix:");
	sc("%d",&order);
	int ar[order][order];
	for(int i=0;i<order;i++){
		pr("Enter the elements of row %d of the matrix:\n",i+1);
		for(int j=0;j<order;j++){
			sc("%d",&ar[i][j]);
		}
	}
	for(int i=0;i<order;i++){
		avg = ravg(ar[i],order);
		pr("Average of row %d id %f\n",i+1,avg);
	}
}
