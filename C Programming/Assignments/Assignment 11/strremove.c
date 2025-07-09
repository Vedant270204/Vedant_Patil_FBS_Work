//WAP to Remove the nth Index Character from a Non-Empty String

#include<stdio.h>
int main(){
	char str[100];
    int n, i;

    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter index to remove: ");
    scanf("%d", &n);

    for (i = n; str[i] != '\0'; i++) {
        str[i] = str[i + 1];
    }

    printf(" after removal: %s\n", str);
}