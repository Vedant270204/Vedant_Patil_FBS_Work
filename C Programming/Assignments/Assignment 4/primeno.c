#include<stdio.h>
int main(){
	int n,i,j,isPrime;
	printf("enter a value:");
	scanf("%d",&n);
	printf("prime numbers  1 to %d are:\n",n);
	for(i=2;i<=n;i++){
		isPrime=1;
		
		for(j=2;j<i;j++){
			if(i%j==0){
				isPrime=0;
				break;
			}
		}
		if(isPrime==1){
			printf("%d ",i);
		}
	}
	return 0;
}