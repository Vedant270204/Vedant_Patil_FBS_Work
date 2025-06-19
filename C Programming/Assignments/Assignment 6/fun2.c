//Write a program to check whether a given year is a leap year.

#include<stdio.h>
void leaf();
int main()
{
	leaf();
}
  void leaf()
  {
  		int yr;
	printf("enter a year:");
	scanf("%d",&yr);
	
	if(yr%4==0){
		printf("%d is a leaf year",yr);
	}
	else{
		printf("%d is not leaf year",yr);
	}

  }
	