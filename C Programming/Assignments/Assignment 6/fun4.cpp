//Write a program to check whether a given character is uppercase or lowercase

#include <stdio.h>
 void check();
 
int main(){
    check();
}
void check(){

	
	char ch='A';
	
	if(ch>='A' && ch<='Z'){
		printf("Alphabet is Uppercase");
	}
	else{
		printf("Alphabet is Lowercase");
	}
}



