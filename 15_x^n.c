//prgm by eldhose
//x^n

#include<stdio.h>
int main(){
int x,n;

printf("Enter 2 number to find x^n : ");
scanf("%d%d",&x,&n);

if(n==0){

	printf("Your Answer id 1\n");

}else{
	while(n!=1){
	
		x*=x;
		n--;
	}

printf("Your Answer is %d\n",x);
}
}
