//prgm by eldhose
//fibanoci

#include<stdio.h>
int main(){
int n,num1=0,num2=1;
	printf("Enter a number : ");
	scanf("%d",&n);

	for(int i;i<=n;i++){
	
		printf("%d\t",num1);
		printf("%d\t",num2);
		num1=num1+num2;
		num2=num1+num2;
	}
	printf("\n");
}
