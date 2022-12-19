#include <stdio.h>

int main() {
    char a[3] = {'m', 'j', '\0'};
    char b[3] = {};
    b[0] = 'm';
    b[1] = 'j';
    b[2] = '\0';

    char c[3] = "mj";
    char d[3] = "mj";
    char e[20] = "mj";

    printf("%s, %s, %s, %s\n", a, b, c, d);
}