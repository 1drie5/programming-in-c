/*
 * Question 2:
 * Write a C program to find the factorial of a given number
 * (Without using recursion).
 */

#include <stdio.h>

int main() {
    int num, fact=1, i;

    printf("Enter a number : ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (i = 1; i <= num; i++) {
            fact *= i;
        }
        printf("Factorial of %d = %d\n", num, fact);
    }
    
    return 0;
}