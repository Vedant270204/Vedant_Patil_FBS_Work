#include <stdio.h>
int main(){
	char str[100];
	int len=0;
	
	printf("enter the string :");
	scanf("%s",str);
	
	 while(str[len]!='\0'){
	 len++;
	 }
	 printf("length :%d\n",len);
}