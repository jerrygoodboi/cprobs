#include <stdio.h> 
#define pr printf
#define sc scanf
void swap(int *a,int *b){
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
}
int main(){
	int a,b;
	pr("Enter two numbers a,b:\n");
	sc("%d%d",&a,&b);
	pr("Before swaping: a is %d b is %d\n",a,b);
	swap(&a,&b);
	pr("After swaping: a is %d b is %d\n",a,b);
}
