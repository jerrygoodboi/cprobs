//Calculator functions using functions
#include <stdio.h> 
#define pr printf
#define sc scanf
#define opt 4
float add(float a,float b){ return a+b;}
float sub(float a,float b){ return a-b;}
float mul(float a,float b){ return a*b;}
float div(float a,float b){ return a/b;}
int main(){
	int choice;
	float a,b;
	float (*ptr[opt])(float ,float) = {add,sub,mul,div};
here:{
	pr("Enter a choice\n1:Addition\n2:Subtraction\n3:Multiplication\n4:Division\n5:Exit\n");
	sc("%d",&choice);
	if(choice > 5 || choice < 1){
	
		goto here;
	}
	else if(choice == 5){
		goto exit;
		}
     }
	pr("Enter two numbers:");
	sc("%f%f",&a,&b);
	pr("Result is :%f\n",ptr[choice-1](a,b));
	goto here;
exit:

}
