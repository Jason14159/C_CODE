#include <stdio.h>

void test(int b[]);

int main() {

    /*
    int n[10];
    int i,j;

    for (i=0; i<10; i++) {

        n[i] = i + 100;
    }
    for (j = 0; j < 10; j++) {

        printf("Element[%d] = %d\n", j, n[j]);
    }

    return 0;
    */

    int a[3];
    a[0] = 10;

    printf("Before the function call a[0]: %d\n", a[0]);

    test(a);

    printf("After the function call a[0]: %d\n", a[0]);
}

void test(int b[]) {

    b[0] = 9;
}