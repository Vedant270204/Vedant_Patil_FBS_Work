//Write a program to check whether a person is eligible to vote (age . 18).

#include<stdio.h>
void checkage(int n);
int main(){
	int age;
	printf("Enter the age :");
	scanf("%d",& age);
	
	checkage(age);
}
	void checkage(int n)
	{
		
	if(n>=18){
		printf("%d age is eligbile for voting",n);
	}
	else{
		printf("%d age is not eligbile for voting",n);
	}
}