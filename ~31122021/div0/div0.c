#include <stdio.h>
#include <stdlib.h>

int main() {
    int dividend = 20;
    int divisor = 0;
    int quotient;

    if (divisor == 0) {
        fprintf(stderr, "Divide by 0 and exit running...\n");
        exit(-1); //EXIT_FAILURE
    }
    quotient = dividend / divisor;
    fprintf(stderr, "The value of the variable quotient: %d\n", quotient);
    exit(0); //EXIT SUCCESS
}