//Write a C program to convert given minutes into hours and remaining minutes.

#include<stdio.h>
int main(){
	int time=160;
	
	int hrs=time/60;
	int mins=time%60;
	
	printf("hours=%d",hrs);
	
	printf("minutes =%d",mins);
	
	return 0;
	
}