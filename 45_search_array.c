//prgm by eldhose
//To find an element in an array

#include<stdio.h>
int main(){
    int n,ar[100],i,num,flag=0;
    printf("Enter number of elements you need to input : ");
    scanf(" %d",&n);

    for(i=0;i<n;i++){
        printf("Enter %d element : ",i+1);
        scanf(" %d",&ar[i]);
    }

    printf("Enter element you need to find : ");
    scanf(" %d",&num);

    for(i=0;i<n;i++){
        if(ar[i]==num){
            flag=1;
            break;
        }
    }

    if(flag){
        printf("%d is found at %d position \n",num,i+1);
    }else{
        printf("%d not found \n",num);
    }
}