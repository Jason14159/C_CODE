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
    printf("%s, %s, %s, %s\n", a, b, c, d);
    puts(a);
    // }
}