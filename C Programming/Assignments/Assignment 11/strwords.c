//WAP to Calculate the Number of Words Present in a String


#include<stdio.h>

void main(){
	
	char str[200];
	int i,count=0;
	
	 printf("Enter a string: ");
    gets(str);
     for (i = 0; str[i] != '\0'; i++) 
	{
        
        if ((str[i] == ' ' || str[i] == '\t') && str[i + 1] != ' ' && str[i + 1] != '\0')
		{
            count++;
        }
    }
    
    if (str[0] != '\0' && str[0] != ' ')
        count++;

    printf("Number of words: %d\n", count);
}
