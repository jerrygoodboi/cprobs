//27 pgm to print sum of diagonal elements is armstrong or not
#include <stdio.h> 
#include <math.h>
#define pr printf
#define sc scanf
int dcount(int num){
	int val = 0;
	while(num != 0){
		val++;
		num/=10;
	}
	return val;
}
int is_arm(int num){
	int count = dcount(num);	
	int i=0,val=0,temp;
	while(i < count){
		temp = num % 10; 
		val += pow(temp,count);
		num /=10;
		i++;
	}
	return val;
}
int main(){
	int order,sum=0;
	pr("Enter the order of the matrix:");	
	scanf("%d",&order);
	int ar[order][order];
	for(int i=0;i<order;i++){
		for(int j=0;j<order;j++){
			sc("%d",&ar[i][j]);
		}
	}
	for(int i=0;i<order;i++){
		sum += ar[i][i];
	}	
	if(sum == is_arm(sum)){
	printf("Sum of diagonal elements is Armstrong\n");
	}
	else{
	printf("Sum of diagonal elements is not Armstrong\n");
	}
}
