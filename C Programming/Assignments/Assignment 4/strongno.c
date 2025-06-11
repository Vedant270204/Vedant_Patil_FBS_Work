#include<stdio.h>
int factorial(int num){
	int fact=1;
	for(int i=1;i<=num;i++){
		fact*=i;
	}
	return fact;
}
int main(){
	int n,i,temp,digit,sum;
	printf("enter a value:");
	scanf("%d",&n);
	printf("strong numbers  1 to %d are:\n",n);
	for(i=1;i<=n;i++){
		temp=i;
		sum=0;
		
		for(;temp>0;temp/=10){
			digit=temp%10;
			sum+=factorial(digit);
	
				
			
		}
		if(sum==i){
			printf("%d ",i);
		}
	}
}
