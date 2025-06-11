#include <stdio.h>

int main() {
    int num, choice, i, sum = 0, temp, digit, rev = 0, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nChoose an operation:\n");
    printf("1. Check Even or Odd\n");
    printf("2. Check Prime or Not\n");
    printf("3. Check Palindrome or Not\n");
    printf("4. Check Positive, Negative or Zero\n");
    printf("5. Reverse the Number\n");
    printf("6. Find Sum of Digits\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            // Even or Odd
            if (num % 2 == 0)
                printf("%d is Even.\n", num);
            else
                printf("%d is Odd.\n", num);
            break;

        case 2:
            // Prime or Not
            if (num <= 1) {
                isPrime = 0;
            } else {
                for (i = 2; i < num; i++) {
                    if (num % i == 0) {
                        isPrime = 0;
                        break;
                    }
                }
            }

            if (isPrime)
                printf("%d is a Prime number.\n", num);
            else
                printf("%d is not a Prime number.\n", num);
            break;

        case 3:
            // Palindrome
            temp = num;
            rev = 0;
            for (; temp != 0; temp /= 10) {
                digit = temp % 10;
                rev = rev * 10 + digit;
            }

            if (rev == num)
                printf("%d is a Palindrome number.\n", num);
            else
                printf("%d is not a Palindrome number.\n", num);
            break;

        case 4:
            // Positive, Negative or Zero
            if (num > 0)
                printf("%d is Positive.\n", num);
            else if (num < 0)
                printf("%d is Negative.\n", num);
            else
                printf("Number is Zero.\n");
            break;

        case 5:
            // Reverse number
            temp = num;
            rev = 0;
            for (; temp != 0; temp /= 10) {
                digit = temp % 10;
                rev = rev * 10 + digit;
            }
            printf("Reversed Number: %d\n", rev);
            break;

        case 6:
            // Sum of digits
            temp = num;
            sum = 0;
            for (; temp != 0; temp /= 10) {
                digit = temp % 10;
                sum += digit;
            }
            printf("Sum of digits = %d\n", sum);
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
