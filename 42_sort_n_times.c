#include <stdio.h> 
#define pr printf
#define sc scanf
int main(){
	int size,temp;
        pr("Enter the size of the array:");
        sc("%d",&size);
        int ar[size];
	for(int i = 0;i < size; i++){
                sc("%d",&ar[i]);
        }
	pr("Enter the number of elements to be sorted:");
	int n;
	sc("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=i;j<size;j++){
			if(ar[i]>ar[j]){
				temp = ar[i];
				ar[i] = ar[j];
				ar[j] = temp;
			}
		}
	}
	 for(int i = 0;i < size; i++){
      		 pr("%d ",ar[i]);
         }
         pr("\n");
}


