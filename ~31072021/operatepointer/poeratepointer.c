#include <stdio.h>

int main() {

    int a[4] = {1, 2, 3, 4}, *p = a, i, value;

    for (int i = 0; i <4; i++) {
        // value = *(p + i);
        // value = *(p + i);
        // value = *(p++);
        // value = *(a++);
        // value = *(a + i);
        value = a[i];

        printf("ap%d address = %d\n", i, (p + i));
        printf("a[%d] = %d\n", i, value);
    }
    printf("ap%d address = %d\n", i, (p + i)); //first add this sentence
}