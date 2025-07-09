//WAP to Form a New String where the First Character and the Last Character have been Exchanged

#include<stdio.h>
int main(){
	char str[50];
	int i=0;
	printf("enter a string :");
	scanf("%s",str);
	
	while(str[i]!='\0'){
		i++;
	}
	if(i>1){
	int	temp=str[0];
		str[0]=str[i-1];
		str[i-1]=temp;
	}
	printf("string is :%s\n",str);
}
