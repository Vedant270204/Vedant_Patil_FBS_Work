//Write a program to scan string from user then scan a single character and search it in a accepted string.


#include<stdio.h>
int main(){
	char str[50],n;
	int i,found=0;
	
	printf("enter a string :");
	scanf("%s",str);
	
	printf("enter a character to search :");
	scanf(" %c",&n);
	
	for(i=0;str[i]!='\0';i++){
		if(str[i]==n){
			printf("character found :",n,i);
			found=1;
			break;
		}
}
		if(!found){
					printf("character not found :",n);
            }
}
    