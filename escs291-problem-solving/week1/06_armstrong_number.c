/*
 * Question 6:
 * Write a C Program to check whether an integer entered by the user
 * is an Armstrong number or not.
 *
 * Note: An Armstrong number (also known as narcissistic number) is a number
 * that is equal to the sum of its own digits each raised to the power of
 * the number of digits.
 * Example: 153 = 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153
 */

#include <stdio.h>
#include <math.h>

int main() {
    int num, original_num, remainder, digits = 0;
    double result = 0.0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original_num = num;

    int temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, digits);
        temp /= 10;
    }

    if ((int)result == original_num) {
        printf("%d is an Armstrong number.\n", original_num);
    } else {
        printf("%d is not an Armstrong number.\n", original_num);
    }
    
    return 0;
}
