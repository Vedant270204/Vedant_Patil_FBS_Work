//1. Write a user define functions for :: a. mystrcpy

#include<stdio.h>
int main(){
	char str1[]="Vedant",str2[20];
	int i=0;
	while(str1[i]!='\0'){
		str2[i]=str1[i];
		i++;
	}
	str2[i]='\0';
	printf("Coiped string :%s\n",str2);
}
