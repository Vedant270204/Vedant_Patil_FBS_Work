//Check the given number is prime or not. Input: n = 7 Output: Prime

#include <stdio.h>
 void checkprime();
 
int main(){
	checkprime();
}

  void checkprime()
  
	{
	
	 int i , n=2;;
	 printf("Enter the Number : ");
	 scanf("%d",&i);
	 
	 while(n*n <= i){
	 	if(i % n == 0){
	 		printf("Number Is Not Prime");
	 		return ;
		 }
		 n++;
	 }
	 printf("Number is Prime");
	 return ;
}

