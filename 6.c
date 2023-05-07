/*Write a pgm to read 2 int values m and n and decide and print whether m is a
multiple of n*/ 
#include <stdio.h> 
int main(){
	int m,n;
	printf("Enter two numbers:");
	scanf("%d%d",&m,&n);
	if(m%n==0)
		printf("%d is multiple of %d\n",m,n);
	else
		printf("%d is not a multiple of %d\n",m,n);
}
