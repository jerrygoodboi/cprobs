//44 write a function that can be called to find the largest of an mxn matrix
#include <stdio.h> 
#define pr printf
#define sc scanf
int m,n;
int largest(int ar[][n]){
	int large=ar[0][0];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
		if(large < ar[i][j]) large= ar[i][j];	
		}
	}
	return large;
}
int main(){
	pr("Enter the order of the matrix\nEnter the no of rows:");
	sc("%d",&m);
	pr("Enter the no of columns:");
	sc("%d",&n);
	int ar[m][n];
	pr("Enter the elements of the array\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			pr("Enter the element of row %d col %d: ",i,j);
			sc("%d",&ar[i][j]);
		}	
	}
	printf("Largest number in the given matrix is: %d\n",largest(ar));
}
