//46 write a pgm to compute sum of all elements inan array using pointers
#include <stdio.h> 
#include <stdlib.h> 
#define pr printf
#define sc scanf
int main(){
	int order,bloat=0,*sum=&bloat;
	pr("Enter the number of elements:");
	sc("%d",&order);
	int *ar = (int*)malloc(sizeof(int)*order);
	pr("Enter the elememts\n");
	for(int i=0;i<order;i++){
		pr("Enter element %d: ",i);
		sc("%d",&ar[i]);
		*sum += *(ar+i); 
	}
	pr("Sum is: %d\n",*sum);
	free(ar);
}
