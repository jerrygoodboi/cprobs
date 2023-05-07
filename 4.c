/* Pgm to print Sum and Average of 3 values */
#include <stdio.h> 
int main(){
	float a,b,c;
	printf("Enter three numbers:");
	scanf("%f%f%f",&a,&b,&c);
	printf("Sum : %f\nAverage : %f\n",a+b+c,(a+b+c)/3);
}
