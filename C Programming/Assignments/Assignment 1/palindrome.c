//Write a program to check given 3 digit number is pallindrome or not.

#include <stdio.h>

int main(){
	
	int num=121;
	int firstnum=num/100;
	int lastnum=num%10;
	
	if(firstnum==lastnum){
		printf("%d is palindrome",num);
		
	}
	else{
			printf("%d is not palindrome",num);
	}
	return 0;
}