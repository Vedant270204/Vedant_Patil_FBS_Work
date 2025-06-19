#include<stdio.h>

int num();
int main(){
	int n,i,j,sum;
	n=num();
	
	for(i=1;i<=n;i++){
		sum=0;
		for(j=1;j<i;j++){
			sum=sum+j;
		}
	}
	if(sum == i){
		printf("%d",i);
	}
}
 int num(){
 	int max;
 	printf("Enter max limit :");
 	scanf("%d",&max);
 	return max;
 }
