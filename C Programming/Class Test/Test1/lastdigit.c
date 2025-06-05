#include <stdio.h>

int main() {
    int number, lastTwoDigits;

    
    printf("Enter a number: ");
    scanf("%d", &number);

    
    lastTwoDigits = number % 100;

    if (lastTwoDigits < 0) {
        lastTwoDigits = -lastTwoDigits;
    }

    printf("Last two digits: %d", lastTwoDigits);

    
}
