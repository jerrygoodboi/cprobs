//33 pgm to check the given no is prime or not
#include <stdio.h> 
int main(){
	int num,flag=0;
	printf("Enter a number:");
	scanf("%d",&num);
	for(int i=2;i<num/2;i++){
		if(num%i==0)
			flag=1;
			break;
	}
	if(flag==1){
		printf("Not prime\n");
	}
	else{
		printf("Prime\n");
	}
}
