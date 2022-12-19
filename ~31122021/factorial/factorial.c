#include <stdio.h>

double factorial(unsigned int i) {
    if (i <= 1) {
        return 1;
    }
    return i * factorial(i - 1);
}
void main() {
    int i = 1500;
    printf("Factorial of %d is %llu\n", i, factorial(i));
}