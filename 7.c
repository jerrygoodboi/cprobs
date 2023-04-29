//prgm by eldhose
//mobile



#include<stdio.h>
#include<string.h>


int main(){

char num[15]; //you can use int num don't use char num[15]
int no_call;
float bill=250;

mob:	//don't write this line
	
	printf("Enter your mobile number : ");
	scanf("%s",num);	//replace %s to %d

	if(strlen(num)==10){ 	//don't write this line  
	
		printf("Enter number of calls : ");
		scanf("%d",&no_call);

			if(no_call>100){
				
				no_call=no_call-100;
				bill+=(no_call*1.25);

			}else if(no_call<1){
			
				printf("\nAre you dead ???\n\n");
				return 0;
			}

		printf("\n\nYour number : %s\n\nBill you have to pay : %f\n\n",num,bill);
	}

	//put a } here
	
	//Your prgm ends here
	
	//Don't write the code under this line
	else{

	printf("mobile number must have 10 numbers\n");
	goto mob;

	}
}
