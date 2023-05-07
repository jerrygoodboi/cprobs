#include <stdio.h> 
#define pr printf
#define sc scanf
int main(){
	char s1[100],s2[100];
	pr("Enter a string:");
	fgets(s1,99,stdin);
	pr("Enter next string:");
	fgets(s2,99,stdin);
	int st = strcmp(s1,s2);
	if(st == 0){
		fprintf(stderr,"idk what to do with this qn but the given strings r == btw\n");
	}
	else{
		fprintf(stderr,"idk what to do with this qn but the given strings r != btw\n");
	}
}
