//Write a program to check whether a person is eligible to vote (age . 18).

#include<stdio.h>
int main(){
	int age=20;
	
	if(age>=18){
		printf("%d age is eligbile for voting",age);
	}
	else{
		printf("%d age is not eligbile for voting",age);
	}
}