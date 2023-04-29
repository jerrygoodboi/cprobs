//prgm by eldhose
//mobile


#include<stdio.h>
#include<string.h>


int main(){

char num[15];
int no_call;
float bill=250;
mob:
	printf("Enter your mobile number : ");
	scanf("%s",num);

	if(strlen(num)==10){
	
		printf("Enter number of calls : ");
		scanf("%d",&no_call);

			if(no_call>100){
				
				no_call=no_call-100;
				bill+=(no_call*1.25);

			}else if(no_call<1){
			
				printf("Are you dead ???\n");
				return 0;
			}

		printf("\n\nYour number : %s\n\nBill you have to pay : %f\n\n",num,bill);
	}
	else{

	printf("mobile number must have 10 numbers\n");
	goto mob;

	}
}
