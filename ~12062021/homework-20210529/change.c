#include <stdio.h>

int main() {

    float f1, f2, f3 = 0.0;

    printf("Enter two numbers: ");
    scanf("%f %f", &f1, &f2);

    /* Check
    f1 = 1.3
    f2 = 3.4
    f3 = 0;
    */
    f3 = f1;
    printf("The value of f1 and f2 and f3 are %f, %f and %f respectively\n", f1, f2, f3);
    /* Check
    f1 = 1.3
    f2 = 3.4
    f3 = 1.3
    */
    f1 = f2;
    printf("The value of f1 and f2 and f3 are %f, %f and %f respectively\n", f1, f2, f3);

    f2 = f3;
    printf("The value of f1 and f2 and f3 are %f and %f\n", f1, f2);
    return 0;
}