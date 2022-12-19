#include <stdio.h>

int sum_and_minus(int v1, int v2, int *minus) {

    *minus = v1 - v2;
    return v1 + v2;
}

int multiply_and_divide(int v1, int v2, int *multiply) {

    *multiply = v1 * v2;
    return v1 / v2;
}

int main() {

    int a = 6, b = 2;

    int sum, minus, multiply, divide;

    sum = sum_and_minus(a, b, &minus);
    printf("%d+%d=%d\n", a, b, sum);
    printf("%d-%d=%d\n", a, b, minus);

    multiply = multiply_and_divide(a, b, &multiply);
    printf("%d*%d=%d\n", a, b, &multiply);
    printf("%d/%d=%d\n", a, b, divide);
}