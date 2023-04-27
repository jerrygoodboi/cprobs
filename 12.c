//To find the no. of and sum of integers which are greater than 100 
//and less than 200 and divisible by 7
#include <stdio.h> 
int main(){
	int j=0,sum=0;
	for(int i=101;i<200;i++){
		if(i%7==0){
		sum+=i;
		j++;
		}
	}
	printf("No. of numbers: %d\nSum of those numbers:%d\n",j,sum);
}
