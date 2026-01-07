/*
 * Question 1:
 * Write a C program to find the largest number among three numbers
 * (The numbers may be equal).
 */

#include <stdio.h>

int main() {
    int x, y, z;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    if (x == y && y == z)
        printf("All numbers are equal");
    else if (x >= y && x >= z)
        printf("%d is the greatest", x);
    else if (y >= x && y >= z)
        printf("%d is the greatest", y);
    else
        printf("%d is the greatest", z);
    return 0;
}
