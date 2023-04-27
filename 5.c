//prgm by eldhose
//find the largest and smallest of 3 numbers

#include<stdio.h>
int main(){

	int a,b,c,big,small;

	printf("Enter 3 number : ");
	scanf("%d%d%d",&a,&b,&c);

	big=a;
	small=a;

	if(b>big)
	big=b;
	if(c>big)
	big=c;

	if(b<small)
	small=b;
	if(c<small)
	small=c;

	
printf("Largest Number is %d\nSmallest Number is %d\n",big,small);

}
