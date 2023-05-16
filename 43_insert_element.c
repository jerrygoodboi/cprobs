//prgm by eldhose
//To insert an element into sorted array

#include<stdio.h>

void sort(int ar[],int n){
for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
                if(ar[i]>ar[j]){
                ar[i]=ar[i]+ar[j];
                ar[j]=ar[i]-ar[j];
                ar[i]=ar[i]-ar[j];
                }
        }
}
}


int main(){

    int newnum,n,i;
    printf("Enter number of elements in the array : ");
    scanf("%d",&n);
    int ar[n];
    printf("Enter all elements one by one \n");
    
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }

    sort(ar,n);

    printf("Sorted array \n");
    for(i=0;i<n;i++){
        printf("%d\t",ar[i]);
    }


    printf("\nEnter a new number add to sorted aray : ");
    scanf(" %d",&newnum);

    for(i=0;i<n;i++){
        if ( newnum<ar[i] )
            break;
    }

    for(int j=n;j>=i;j--){
        ar[j+1]=ar[j];
    }

    n++;
    ar[i]=newnum;

    printf("New element added array \n");
    for(i=0;i<n;i++){
        printf("%d\t",ar[i]);
    }

    printf("\n");

}