/*
 * Question 4:
 * Write a C program to reverse a given number.
 */

#include <stdio.h>

int main() {
    int num, reversed = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    int original_num = num;
    int is_negative = (num < 0);
    num = (num < 0) ? -num : num;

    while (num > 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    if (is_negative) {
        reversed = -reversed;
    }

    printf("Reversed number of %d = %d\n", original_num, reversed);

    return 0;
}
