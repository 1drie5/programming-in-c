/*
 * Question 8:
 * Write a C Program to print the even values up to n numbers.
 */

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Even values up to %d:\n", n);
    for (i = 0; i <= n; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
