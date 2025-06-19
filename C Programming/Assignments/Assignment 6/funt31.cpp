//Write a program to check whether a given year is a leap year.

#include<stdio.h>
void checkyear(int n);
int main(){
	int yr;
	printf("Enter the Year :");
	scanf("%d",& yr);
	
	checkyear(yr);
}
    void checkyear(int n){
	
	if(n%4==0){
		printf("%d is a leaf year",n);
	}
	else{
		printf("%d is not leaf year",n);
	}
}
