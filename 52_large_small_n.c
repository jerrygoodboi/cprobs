//39 pgm to find largest and smallest of n numbers using function
#include <stdio.h> 
#include <stdlib.h> 
#define pr printf
#define sc scanf
void lrgsml(int *ar,int size){
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(*(ar+i) > *(ar+j)){
				*(ar+i) += *(ar+j);
				*(ar+j) = *(ar+i) - *(ar+j);
				*(ar+i) -= *(ar+j);
			}
		}
	}
	pr("Largest is :%d\nSmallest is :%d\n",*(ar+size-1),*(ar));
}
int main(){
	int size;
	pr("Enter the number of elements:");
	sc("%d",&size);
	int *ar = (int *)malloc(sizeof(int)*size);
	for(int i=0;i<size;i++){
		pr("Enter element %d :",i+1);
		sc("%d",(ar+i));
	}
	lrgsml(ar,size);
	free(ar);
}
