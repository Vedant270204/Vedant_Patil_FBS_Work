//WAP to Count the Number of Vowels in a String.

#include <stdio.h>
int main() {
    char str[100],ch;
    int i, count = 0;
    
     printf("Enter a string: ");
    scanf("%s", str);
    
    for(i=0;str[i]!='\0';i++){
    	ch=str[i];
    	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
		   ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
		   	count++;
		   }
	}
	printf("No of vowels :%d",count);
    
}