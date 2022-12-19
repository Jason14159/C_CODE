#include <stdio.h>

double quotient(double d1, double d2) {

    return d1 / d2;
}

void main() {

    double result = (double)quotient(1.0, 3.141592653589);
    printf("result=%.15f", result);
}
