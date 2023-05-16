//40 pgm to sort an array of integers using function
#include <stdio.h> 
#define pr printf
#define sc scanf
void sort(int *ar, int order){
	for(int i=0;i<order;i++){
		for(int j=i;j<order;j++){
		    if(ar[i]>ar[j]){
			ar[i]+=ar[j];
			ar[j]=ar[i]-ar[j];
			ar[i]-=ar[j];
		    }
		}
	}
}
int main(){
	int order;
    pr("Enter the number of the elements:");
    sc("%d",&order);
    int *ar = (int*)malloc(sizeof(int)*order);
    pr("Enter the elements of the array\n");
    for(int i=0;i<order;i++){
	pr("Enter element %d:",i+1); 
	sc("%d",&ar[i]);
    }
    sort(ar,order);
    for(int i=0;i<order;i++){
	pr("%d ",ar[i]); 
    }
    pr("\n");
    free(ar);
}
