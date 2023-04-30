//prgm by eldhose
//rev a number 

#include<stdio.h>
int main(){
int num,temp,sum=0;

	printf("Enter a number : ");
	scanf("%d",&num);

while(num!=0){

	temp=num%10;
	num=num/10;
	sum=(sum*10)+temp;
}
	printf("Answer is %d\n",sum);
}
