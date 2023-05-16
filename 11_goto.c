//prgm by eldhose
//goto statment

#include<stdio.h>
#include<math.h>
int main(){

float num,ans;
int i=0;

	printf("This show u sqrt of  5 number\n");

read:
	printf("Enter a number : ");
	scanf("%f",&num);
	ans=sqrt(num);
	printf("sqrt is %f\n",ans);
i++;
if(i<=5){
	goto read;
}else{

	printf("THE END\n");
}
}
