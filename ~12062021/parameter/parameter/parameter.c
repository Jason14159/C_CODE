#include <stdio.h>

char test(char a) {
    a = 10;
    return a;
}

int main() {
    char b = 5;
    int c;
    c = test(b);
    printf("b is %d\n", c);
    return 0;
}