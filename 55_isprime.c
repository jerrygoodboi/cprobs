//42 write a function prime that returns 1 if its argument is a prime number and returns 0 otherwise
#include <stdio.h> 
#include <stdbool.h> 
#define pr printf
#define sc scanf
bool prime(int *num){
	if(*num < 2) return 0;
    for(int i=2;i<=*num>>1;i++){
	if(*num % i == 0) return 0;
    }
    return 1;
}
int main(){
	int num;
    pr("Enter a number:");
    sc("%d",&num);
    pr("%d\n",prime(&num));
}
