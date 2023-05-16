//prgm by eldhose
//odd or even


#include<stdio.h>
int main(){

int num;

	printf("Enter a number : ");
	scanf("%d",&num);

	if(num%2==0)
		printf("\n%d is even\n\n",num);
	else
		printf("\n%d is odd\n\n",num);
}
