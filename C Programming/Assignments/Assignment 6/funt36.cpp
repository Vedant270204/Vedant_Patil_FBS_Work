//Accept a number and check if it is divisible by 3, 5,both.

#include<stdio.h>
int checknumber( int n);
int main(){
	int num;
	
	printf("Enter the number =");
	scanf("%d",&num);
	
	checknumber(num);
	
}
int checknumber(int n)
{

	if(n%3==0||n%5==0){
		printf("Number is divisible by 3 and 5");
	}
	else if(n%3==0){
		printf("Number is divisible by 3 ");
	}
	else if(n%5==0){
		printf("Number is divisible by 5");
	}
	else{
		printf("Number is not divisible by both 3 and 5");
	}
	
}
