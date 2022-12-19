#include <stdio.h>

int a, b, c, d;
void main() {
    d = 2;
    for (a = 1; a < 10; a++, d++) {
        for (b = 1; b < d; b++) {
            c = a * b;
            printf("%d*%d=%d ", a, b, c);
        }
        printf("\n");
    } 
}