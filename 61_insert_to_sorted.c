#include <stdio.h> 
#include <stdlib.h> 
#define pr printf
#define sc scanf
void insert(int *ar,int num,int *size){
	int i = 0;
	while(i<*size){
if(num < ar[i]) break;
else i++;
	}
	(*size)++;
	ar = realloc(ar,sizeof(int)**size);
	for(int j=*size-2;j>=i;j--){
		ar[j+1] = ar[j];
	}
	ar[i] = num;
}
int main(){
	int number;
	pr("Enter the number of elements: ");
	sc("%d",&number);
	int *ar = (int*)malloc(sizeof(int)*number);
	pr("Enter the elements\n");
	for(int i=0;i<number;i++){
		pr("Enter element %d: ",i);	
		sc("%d",&ar[i]);
	}
	pr("Enter the number to be inserted: ");
	int inum;
	sc("%d",&inum);
	for(int i=0;i<number;i++){
		for(int j=i;j<number;j++){
			if(ar[i]>ar[j]){
				ar[i]+=ar[j];
				ar[j] = ar[i] - ar[j];
				ar[i] -= ar[j];
			}
		}
	}
	insert(ar,inum,&number);
	free(ar);
}
