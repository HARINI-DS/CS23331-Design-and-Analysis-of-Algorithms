/* Write a C program to find the sum first N natural numbers. */

#include <stdio.h>
int main() {
    int n, sum;
    scanf("%d", &n);
    sum = n * (n + 1) / 2;
    printf("%d\n", sum);
    return 0;
}
