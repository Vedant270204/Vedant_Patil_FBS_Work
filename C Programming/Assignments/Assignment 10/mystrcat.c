//4. Write a user define functions for ::mystrcat

#include<stdio.h>
int main(){
	int i=0,j=0;
	char str1[50],str2[50];
	printf("Enter a string 1 :");
	scanf("%s",str1);
	
		printf(" \n Enter a string 2 :");
	scanf("%s",str2);
	
	while(str1[i]!='\0'){
		i++;
	}
	while(str2[j]!='\0'){
		str1[i]=str2[j];
		i++;
		
		j++;
	}
	str1[i]='\0';
	printf("%s\n",str1);
}
