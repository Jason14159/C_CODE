#include <stdio.h>

int main() {
    int var, *ptr, **pptr, ***ppptr;
    var = 3000;

    ptr = &var;
    pptr = &ptr;
    ppptr = &pptr;

    printf("Value of var = %d\n", var);
    printf("Value of ptr = %d\n", *ptr);
    printf("Value of pptr = %d\n", **pptr);
    printf("Value of ppptr = %d\n", ***ppptr);
    return 0;
}