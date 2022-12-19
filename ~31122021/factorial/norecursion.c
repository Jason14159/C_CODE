#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("You inputted: %d\n", n);
    if (n < 0) {
        printf("Error! Negative numbers cannot be fatorial ");
    } else {
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("%d != %llu\n", n, factorial);
    }
    return 0;
}