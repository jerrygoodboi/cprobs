//37 wap that will copy m consecutive char from a string s1 *
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#define pr printf
#define sc scanf
int main(){
	char str[100];
	int m,n;
	pr("Enter the string:");
	fgets(str,99,stdin);
	pr("Length of string is :%d\n",strlen(str));
here:{	pr("Enter how many letters to cp and from which postion (Position starts from 0):\n");
	sc("%d%d",&m,&n);
	if(m > strlen(str) || ((n < 0) || (n > strlen(str)))){
	goto here;
	}
     }
	char *str2 = (char*)malloc(sizeof(char) * (m+1));
	int j=0;
	for(int i=n;i<m;i++){
		*(str2+j) = str[i];
		j++;
	}
	puts(str2);
	free(str2);
}
