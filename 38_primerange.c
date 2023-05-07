//35 pgm to print prime no.s b/w given range
#include <stdio.h> 
int main(){
	int num,flag;
	printf("Enter a number:");
	scanf("%d",&num);
	for(int j=2;j<num;j++){
		flag=0;
	for(int i=2;i<(j/2)+1;i++){
		if(j%i==0){
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("%d\n",j);
	}
	}
}
