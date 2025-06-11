//Write a program to check whether a given character is a vowel or consonant

#include<stdio.h>

int main(){
	char ch='e';
	
	if(ch=='a'||ch=='e'||ch=='i'||ch=="o"||ch=='u'){
		printf("%c is vowel",ch);
	}
	else{
		printf("%c is not vowel",ch);
	}
}