//prgm by eldhose
//name of employes are in 3 array join them into one array

#include<stdio.h>
#include<string.h>
int main(){
    int i,num;
    printf("Enter number of employes : ");
    scanf(" %d",&num);

    char firstname[num][20],midname[num][20],lastname[num][20];
    char fullname[num][60];

    for(i=0;i<num;i++){
        printf("Enter first name of %d employe : ",i+1);
        scanf(" %s",firstname[i]);
        printf("Enter mid name of %d employ :",i+1);
        scanf(" %s",midname[i]);
        printf("Enter last name of %d employ :",i+1);
        scanf(" %s",lastname[i]);

        strcpy(fullname[i],firstname[i]);
        strcat(fullname[i]," ");
        strcat(fullname[i],midname[i]);
        strcat(fullname[i]," ");
        strcat(fullname[i],lastname[i]);

    } 

    for(i=0;i<num;i++){
        printf("Full Name of %d employe is %s\n",i+1,fullname[i]);
    }
}