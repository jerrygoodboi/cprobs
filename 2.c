#include <stdio.h>
int main(){
	int len,wid;
	printf("Enter length and breadth of the rectangle:");
	scanf("%d%d",&len,&wid);
	printf("Area of the rectangle is %d \nPerimeter is %d \n",len*wid,2*(len+wid));
}
