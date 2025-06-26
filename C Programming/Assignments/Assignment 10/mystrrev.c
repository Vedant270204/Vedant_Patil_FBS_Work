//8. Write a user define functions for ::mystrrev
#include <stdio.h>
int main() {
    char str[] = "vedant";
    int i = 0, j;
    while (str[i] != '\0') i++;
    j = i - 1;
    for (int k = 0; k < i / 2; k++) {
        char temp = str[k];
        str[k] = str[j - k];
        str[j - k] = temp;
    }
    printf("Reversed: %s\n", str);
    return 0;
}
