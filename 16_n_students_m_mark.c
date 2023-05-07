//13 The class of n students take an annual exam in m subs*
#include <stdio.h> 
#define pr printf
#define sc scanf
int main(){
	int sum,mark,n,m;
	pr("Enter the no. of students and  No. of subjects:");
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		sum =0;
		mark=0;
		pr("Student %d:\n",i);
		for(int j=0;j<m;j++){
			pr("Enter the marks:");
			scanf("%d",&mark);
			sum+=mark;
		}
		pr("Total mark for student %d is %d\n",i,sum);
	}
}
