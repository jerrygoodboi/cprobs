//31 pgm to insert an element into specified position
#include <stdio.h> 
#include <stdlib.h> 
#define pr printf
#define sc scanf
void insert(int *ar,int pos,int ele,int size){
	int temp;
	for(int i=size-1;i>=pos;i--){
		temp = *(ar+i+1);
		*(ar+i+1) = *(ar+i) ;
		*(ar+i) = temp;
	}
	*(ar+pos) = ele;
}
int main(){
	int size;
	pr("Enter the size of the array:");
	scanf("%d",&size);
	int *ar = (int *)malloc(sizeof(int)*size);
	for(int i=0;i<size;i++){
		sc("%d",&ar[i]);
	}
	int pos,ele,status;
	while(1){
		pr("Insert or EXIT (type 1 to insert, 0 to exit): ");
		scanf("%d",&status);
		if(!status){break;}
		size++;
		ar = realloc(ar, sizeof(int) * size);
here:{
	     pr("Enter the postion to add new element:");
	     sc("%d",&pos);
	     if((pos >= size) || (pos < 0)){
		     goto here;
	     }
     }
     pr("Enter the element:");
     sc("%d",&ele);
     insert(ar,pos,ele,size);	

     for(int i=0;i<size;i++){
	     pr("Element at postion %d is : %d\n",i,ar[i]);
     }
	}
	free(ar);
}
