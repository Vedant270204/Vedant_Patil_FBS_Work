//3. Write a user define functions for ::mystrcmp
#include<stdio.h>
int main(){
	int i=0;
	char str1[50],str2[50];
	printf("Enter a string 1 :");
	scanf("%s",str1);
	
	printf("Enter a string 2 :");
	scanf("%s",str2);
	
	while(str1[i]!='\0'&&str2[i]!='\0'&&str1[i]==str2[i]){
		i++;
	}
	int result=str1[i]-str2[i];
	
	if (result == 0) {
        printf("Strings are equal\n");
    } else if (result < 0) {
        printf("String 1 is less than String 2\n");
    } else {
        printf("String 1 is greater than String 2\n");
    }
	printf("Result :%d\n",result);
	
}
