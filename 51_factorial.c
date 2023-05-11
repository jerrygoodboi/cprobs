//38 find the factorial of a number using recursion
#include <stdio.h>
#include <stdint.h>
uint64_t fact(uint64_t num){
	if(num == 1 || num == 0) return 1;
	else return num * fact(num-1);
} 
int main(){
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	printf("%llu\n",fact(num));
}
