//Pgm to calculate the values of square roots and squares of the no.s 0 to 100
#include <stdio.h> 
#include <math.h>
int main(){
	for(int i=0;i<101;i++){
	printf("Square root of %d is :%f\nSquare of %d is :%f\n",i,sqrt(i),i,pow(i,2));
	}
}
