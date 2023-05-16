//prgm by eldhose
//number of a char in a gioven string

#include<stdio.h>
int main(){
    char str[100],chr;
    int vall=0;
    
    printf("Enter the string \n");
    scanf("%[^\n]s", str);
    printf("Enter a letter that you need to check repets in the above line : ");
    scanf(" %c",&chr);

        for(int i=0;str[i]!='\0';i++){
            if(str[i]==chr){
                vall++;
            }
        }

    printf("Number of repets of %c in the string is : %d",chr,vall);

}