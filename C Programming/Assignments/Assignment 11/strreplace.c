//WAP Replace all Occurrences of ‘a’ with $ in a String

#include<stdio.h>
int main(){
	char str[50];
	int i;
	
	printf("enter a string :");
	scanf("%s",str);
	
	for(i=0;str[i]!='\0';i++){
		if(str[i]=='a')
		   str[i]='$';
	}
	printf("%s\n",str);
}