//7. Write a user define functions for ::mystrlower
#include<stdio.h>
int main() {
    char str[50]; 
    printf("enter a string :");
    scanf("%s",str);
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }
    printf("Uppercase: %s\n", str);
    
}