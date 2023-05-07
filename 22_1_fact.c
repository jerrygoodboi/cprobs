//19 wap to calculate 1+1/1! ..*
#include <stdio.h> 
#include <stdint.h>
uint64_t fact(uint64_t num){
	if(num == 0){
		return 1;
	}
	else{
		for(int i=num-1;i>0;i--){
		num*=i;
	}
		return num;
	}
}
int main(){
	int n,val;
	double sum=0;
	scanf("%d",&n);	
	for(int i=0;i<n;i++){
	 	sum+=((double)1/fact(i));
	}
	printf("Sum is :%.52f\n",sum);
}
