//prgm by eldhose
//To check the number is palindrom on not

#include<stdio.h>
int main(){
    int num1,num2=0,n,orginal_num;
    printf("Enter a number : ");
    scanf(" %d",&num1);

    orginal_num=num1;
        while (num1!=0){
            n = num1 % 10;
            num2 = ( num2 * 10 ) + n;
            num1 /= 10;
        }

        if(orginal_num==num2){
            printf("This number is palindrom\n");
        }else{
            printf("Number is not palindrom\n");
        }
        
}