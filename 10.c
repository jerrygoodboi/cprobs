/*Print the sum of given digit*/
#include <stdio.h> 
int main(){
	int num,temp=0;
	printf("Enter a number:");
	scanf("%d",&num);
	while(num != 0){
	temp=temp + num % 10;
	num/=10;	
	}
	printf("Sum of the digits of the given number :%d \n",temp);
}
