//prgm by eldhose
//median of an unsorted aray

#include<stdio.h>
void sort(int ar[],int n){
int temp;
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
int n;
printf("Enter number of elements : ");
scanf("%d",&n);
int ar[n];
for(int i=0;i<n;i++){
        printf("Enter %d element : ",i+1);
scanf("%d",&ar[i]);
}

sort(ar,n);

printf("\n\n");

int num=(n/2)-1;
float mean,temp;


if(n%2==0){
        temp=ar[num]+ar[num+1];
mean = temp/2;
}else{
mean = ar[num+1];
}

printf("\tMedian is %.2f\n",mean);
}
