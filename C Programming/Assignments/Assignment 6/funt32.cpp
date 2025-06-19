//Write a program to check given 3 digit number is pallindrome or not.

#include <stdio.h>
 void checknumber(int n);
int main(){
	
       	int num;
        printf("Enter the number :");
        scanf("%d",& num);
    
        checknumber(num);
	
    }
 void checknumber(int n){
 	int number = n;
    int firstnum = n / 100;        
    int lastnum = n % 10; 

	if(firstnum==lastnum){
		printf("%d is palindrome",n);
		
	}
	else{
			printf("%d is not palindrome",n);
	}
	
}
