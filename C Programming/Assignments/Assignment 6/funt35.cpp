
//Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desired operations.

#include <stdio.h>

void cal(int num1,int num2,char op);
int main(){
	
	char op;
	int num1,num2,result;
	
	printf("Enter the Numbers:\n");
	scanf("%d %d",&num1,&num2);
	
	printf("Enter an operator (+,-,*,/,%%)\n");
	scanf(" %c",&op);

op=cal(num1,num2,op);
	
	
	
}

 void cal(int nun1,int num2,char op)
 {
 	int result,num1;
	if(op=='+'){
		result=num1+num2;
	}
	else if(op=='-'){
		result=num1-num2;
	}
	else if(op=='*'){
		result=num1*num2;
	}
	else if(op=='/'){
		result=num1/num2;
	}
	else if(op=='%'){
		result=num1 % num2;
	}
	else{
		printf("Enter correct operator");
	}
	printf("Result : %d", result);
	
}
