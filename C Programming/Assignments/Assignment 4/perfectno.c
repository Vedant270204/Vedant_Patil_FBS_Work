#include<stdio.h>
int main(){
	int n,i,j,sum;
	printf("enter a value:");
	scanf("%d",&n);
	printf("perfect numbers  1 to %d are:\n",n);
	for(i=1;i<=n;i++){
		sum=0;
		
		for(j=1;j<i;j++){
			if(i%j==0){
				sum+=j;
				
			}
		}
		if(sum==i){
			printf("%d ",i);
		}
	}
	return 0;
}