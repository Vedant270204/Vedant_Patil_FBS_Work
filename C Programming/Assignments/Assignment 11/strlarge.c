//WAP to Take in Two Strings and Display the Larger String without Using Built-in Functions

#include<stdio.h>

void main(){
	
	char str1[50],str2[50];
	int len1=0,len2=0,i;
	
	printf("enter a first string : ");
	gets(str1);
	
	printf("enter a second string : ");
	gets(str2);
	
	for(i=0;str1[i]!='\0';i++){
		len1++;
	}
	
	for(i=0;str2[i]!='\0';i++){
		len2++;
	}
	if(len1>len2)
	   printf("Larger string: %s\n",str1);
	else if(len2>len1)
	   printf("Larger string: %s\n",str2);
	else
	printf("Boyh strings are equal length.\n");
}



