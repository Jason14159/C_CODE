#include <stdio.h>

int main() {

    int a[4] = {1, 2, 3, 4}, *p = a, value;
    
    for (int i = 0; i < 4; i++) {
        value = *(p + i);
        printf("a[%d] address = %d\n", i, (p + i));
        printf("a[%d] = %d\n", i, value);
    }
    return 0;
}