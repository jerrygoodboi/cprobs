#include <stdio.h> 
#define pr printf
int main(){
	int low,high,sum;
	pr("Enter the range, first lowest then highest:\n");
	scanf("%d%d",&low,&high);
	for(int i=low;i<=high;i++){
		sum = 0;
		for(int j=1;j<=i>>1;j++){
			if(i%j == 0){
			sum+=j;
			}
		}	
		if(sum == i){
		pr("%d\n",i);
		}
	}
}
