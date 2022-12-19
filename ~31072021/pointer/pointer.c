#include <stdio.h>

int main() {

    char a = 10;
    printf("Before modification, the vaule of a: %d\n", a);
    char *p;
    p = &a;

    char value = *p;
    printf("After modification, the vaule of a: %d\n", a);
}