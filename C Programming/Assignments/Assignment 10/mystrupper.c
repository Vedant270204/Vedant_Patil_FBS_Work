//6. Write a user define functions for ::mystrupper
#include<stdio.h>
int main() {
    char str[50]; 
    printf("enter a string :");
    scanf("%s",str);
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }
    printf("Uppercase: %s\n", str);
    
}