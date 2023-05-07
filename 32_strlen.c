//29 pgm that will compute length of a given char string
#include <stdio.h> 
int main(){
	char string[100];
	int i=0;
	scanf("%[^\n]-*%c",string);
		while(string[i]!='\0'){
		i++;
		}
	printf("%d\n",i);
}
