//Determine the length of a character string
#include <stdio.h> 
#define pr printf
#define sc scanf
#define SIZE 100
int main(){
	char str[SIZE];
	int i;
	pr("Enter the string:");
	fgets(str,SIZE,stdin);
	for(i=0;str[i]!='\0';i++){
	}
	pr("Length of the given string including white spaces is %d\n",i-1);
}
