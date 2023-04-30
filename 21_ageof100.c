//prgm by eldhose
//age group b/w 50 to 60

#include<stdio.h>
int main(){
int memb,num=0;
printf("Enter number of peoples : ");
scanf("%d",&memb);
printf("\n");
int age[memb];
for(int i=0;i<memb;i++){

	printf("Enter age of %d person : ",i+1);
	scanf("%d",&age[i]);
}
for(int j=0;j<memb;j++){

	if(age[j]>=50&&age[j]<=60){
	
		num++;

	}
}

printf("\nNumber of peoples in the age group b/w 50 to 60 is = %d\n",num);

}
