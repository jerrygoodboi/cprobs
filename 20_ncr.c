//17 pgm to calculate ncr
#include <stdio.h> 
int fact(int num){
	if(num==0){
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
	int n,r;
	printf("Enter n and r:");
	scanf("%d%d",&n,&r);
	printf("Ans is:%d\n",fact(n)/(fact(r)*fact(n-r)));
}
