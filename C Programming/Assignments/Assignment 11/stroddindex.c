// WAP to Remove the Characters of Odd Index Values in a String.

#include<stdio.h>

void main(){
	char str[200],newstr[200];
	int i,j=0;
	
	
	printf("enter a string : ");
	gets(str);
	
	for(i=0;str[i]!='\0',i++)
	{
		if(i%2==0)
		{
			newstr[j]=str[i];
			j++;
		}
	}
	newstr[j]='\0';
	
	printf("modified string : %s\n",newstr);
	
}



