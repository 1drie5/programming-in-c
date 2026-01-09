/*
 * Question 3:
 * Write a C program to calculate the sum of digits of a number.
 */

#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    int original_num = num;
    num = (num < 0) ? -num : num;

    while (num > 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    printf("Sum of digits of %d = %d\n", original_num, sum);

    return 0;
}
