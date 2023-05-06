#include <stdio.h> 
#include <stdlib.h> 
#define pr printf
#define sc scanf
void delete(int *ar,int pos,int size){
	int temp;
	for(int i=pos;i<size-1;i++){
		temp = *(ar+i);
		*(ar+i) = *(ar+i+1) ;
		*(ar+i+1) = temp;
	}
}
int main(){
	int size;
	pr("Enter the size of the array:");
	scanf("%d",&size);
	int *ar = (int *)malloc(sizeof(int)*size);
	for(int i=0;i<size;i++){
		sc("%d",&ar[i]);
	}
	int pos,status;
	while(1){
		pr("Delete or EXIT (type 1 to delete, 0 to exit): ");
		scanf("%d",&status);
		if(!status){break;}
here:{
	     pr("Enter the postion to delete an element:");
	     sc("%d",&pos);
	     if((pos >= size) || (pos < 0)){
		     goto here;
	     }
     }
     delete(ar,pos,size);	
     size--;
     if(size == 0){
	     pr("Array underflow\n");
	     break;
     }
     for(int i=0;i<size;i++){
	     pr("Element at postion %d is : %d\n",i,ar[i]);
     }
	}
	free(ar);
}
