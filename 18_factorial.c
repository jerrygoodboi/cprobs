//factorial
#include <stdio.h> 
#define pr printf
int main(){
	int num,fact=1;
	pr("Enter the number:");
	scanf("%d",&num);
		while(num!=0){
	  		fact*=num;
			num--;
		}
	pr("Factorial is : %d\n",fact);
}
