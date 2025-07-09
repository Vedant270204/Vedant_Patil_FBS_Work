//WAP to Take in a String and Replace Every Blank Space with special symbol

#include <stdio.h>
int main() {
    char str[100];
    int i;

    printf("Enter a string with spaces: ");
    scanf(" %[^\n]", str);  // scan string with spaces

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            str[i] = '#';  // special symbol
    }

    printf("Modified string: %s\n", str);
    return 0;
}
