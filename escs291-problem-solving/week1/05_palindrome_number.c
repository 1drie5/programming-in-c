/*
 * Question 5:
 * Write a C Program to Check whether a number is Palindrome or Not.
 */

#include <stdio.h>

int main() {
    int num, reversed = 0, digit, original_num;

    printf("Enter a number: ");
    scanf("%d", &num);

    original_num = num;

    while (num > 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    if (original_num == reversed) {
        printf("%d is a palindrome number.\n", original_num);
    } else {
        printf("%d is not a palindrome number.\n", original_num);
    }

    return 0;
}
