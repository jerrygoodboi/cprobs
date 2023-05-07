//31 pgm to count the vowels and ..
#define pr printf
#include <stdio.h> 
int main(){
	char string[100];
	pr("Enter the string:");
	fgets(string,100,stdin);
	int vowels=0,con=0,i=0;
	while(string[i] != '\0'){
		if((string[i] > 64 && string[i] < 91) || (string[i] > 96 && string[i] < 123)){
			switch(string[i]){
				case 'a': 
				case 'e':
   				case 'i':
				case 'o':					
				case 'u':	
					vowels++;	
					break;
				default: 
					con++;
					break;			
			}
		}	
		i++;
	}
	pr("Vowels: %d\nConsonats: %d\n",vowels,con);
}
