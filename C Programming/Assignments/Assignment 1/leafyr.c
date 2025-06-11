//Write a program to check whether a given year is a leap year.

#include<stdio.h>
int main(){
	int yr=2024;
	
	if(yr%4==0){
		printf("%d is a leaf year",yr);
	}
	else{
		printf("%d is not leaf year",yr);
	}
}