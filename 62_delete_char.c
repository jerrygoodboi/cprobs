#include <stdio.h> 
#define pr printf
#define sc scanf
void delete(char *str,int ch){
	int j=0;
	for(int i=0;*(str+i) != '\0';i++){
		if(*(str+i) != ch && *(str+i) != 32 ){
			pr("%c",*(str+i));
		}
	}
}
int main(){
	char str[100];
	int ch;
	pr("Enter the string:");
	fgets(str,99,stdin);
	pr("Enter the character to be deleted from the string:");
	sc("%c",&ch);
	delete(str,ch);
}
