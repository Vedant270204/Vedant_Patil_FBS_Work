//9. Write a user define functions for ::mystrchr
#include <stdio.h>
int main() {
    char str[] = "Vedant";
    char ch = 'n';
    int i = 0;
    while (str[i]) {
        if (str[i] == ch) {
            printf("Found in: %s\n", str + i);
            return 0;
        }
        i++;
    }
    printf("Not found\n");
    return 0;
}
