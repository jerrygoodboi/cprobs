//35 s1,s2,s3 are 3 string *
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#define pr printf
#define sc scanf
int main(){
	char temp,s1[100],s2[100];
	pr("Enter a string:");
	gets(s1);
	//scanf("%[^\n]-*%c",s1);
	//fgets(s1,99,stdin);
	pr("Enter next string:");
	gets(s2);
	//scanf("%[^\n]-*%c",s2);
	//fgets(s2,99,stdin);
	
	if(strcmp(s1,s2) == 0){
		fprintf(stderr,"idk what to do with this qn but the given strings r == btw\n");
	}
	else{
		char *s3 = (char *)malloc(sizeof(int)*(strlen(s1)+strlen(s2))+1);
		strcat(s3,s1);
		strcat(s3,s2);
		puts(s3);
		pr("Length of s3 is:%d\n",strlen(s3));
		free(s3);
	}
}
