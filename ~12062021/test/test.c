#include <stdio.h>

int test(char a) {

    a = 10;
    return a;
}

int main() {
    char b = 5;
    int c;

    c = test(b);
    printf("b=%u\t, c=%10.5x\n",b, c);

}