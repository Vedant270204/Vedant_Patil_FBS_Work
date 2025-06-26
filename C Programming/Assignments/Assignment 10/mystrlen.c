//2. Write a user define functions for ::mystrlen
#include<stdio.h>
int main(){
	char str[50];
	int i=0;
	printf("enter a string :");
	scanf("%s",str);
	while(str[i]!='\0'){
		i++;
	}
		printf("length of string is :%d\n",i);
	
}