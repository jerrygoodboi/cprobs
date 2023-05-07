//Pgm to compute and display sum of all integers that r divisible by 6 but not 
// divisible by 4 and lie b/w 0 and 100 *
#include <stdio.h> 
int main(){
	int j=0,sum=0;
	for(int i=0;i<100;i++){
		if(i%6==0&&i%4!=0){
		j++;
		sum+=i;
		}
	}
	printf("Count of such numbers: %d\nSum: %d\n",j,sum);
}
