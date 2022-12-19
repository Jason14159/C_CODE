#include <stdio.h>

int sum(int a, char b);

int main() {
    int d = sum(10, '9');

    printf("d id %d\n", d);
    return 0;
}

int sum(int a, char b) {
    int c = a + b;
    return c;
}