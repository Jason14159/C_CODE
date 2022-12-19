#include <stdio.h>

int main() {
    char a[] = {'m', 'j'};
    
    char b[3];
    b[0] = 'm';
    b[1] = 'j';
    b[2] = '\0';

    char c[3] = "mj";
    char d[] = "mj";
    char e[20] = "mj";

    // for (int i = 0; i < 1000; i++) {
    printf("%p, %p, %p, %p\n", a, b, c, d);
    // }
    printf("a[2]=%X, b[2]=%X", a[2], b[2]);
}