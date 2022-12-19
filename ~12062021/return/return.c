#include <stdio.h>

int max(int a, int b) {
    if (a > b) {
        //return a;
        b = a;
    }
    return b;
}

int main() {
    char a = 10, b = 5;
    int c;
    c = max(a, b);
    printf("c is %d", c);
    return 0;
}