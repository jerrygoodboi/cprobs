#include<stdio.h>
int main(){

int mark[5],j,i,total=0;
char name[20],grade[5];
float avg;

	printf("\nEnter first name of studet : ");
	scanf("%s",name);
	printf("Enter mark of 5 sub (mark is out of 100) \n");
	
	for(i=0;i<5;i++){
	
		printf("Enter mark of %d sub : ",i+1);
		scanf("%d",&mark[i]);
		total+=mark[i];
	}

	for(j=0;j<5;j++){
	
		if(mark[j]>=90)
			grade[j]='A';
		else if(mark[j]>=80)
			grade[j]='B';
		else if(mark[j]>=70)
			grade[j]='C';
		else if(mark[j]>=60)
			grade[j]='D';
		else
			grade[j]='F';
	
	}

	printf("\n\tName of student is %s\n",name);
	printf("\t------------------------\n\n");
	for(int k=0;k<5;k++){
	
		printf("\t  Grade of %d sub | %c\n",k+1,grade[k]);

	}
	printf("\n\t------------------------\n\n");
	printf("\tTotal mark is : %d\n\n",total);


}
