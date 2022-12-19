#include <stdio.h>

void swap(int v1, int v2) {
    
    printf("Before replacement: v1 = %d, v2 = %d\n", v1, v2);

    int temp;
    temp = v1;
    v1 = v2;
    v2 = temp;

    printf("After replacement: v1 = %d, v2 = %d\n", v1, v2);
}

void swap_pointer(int *v1, int *v2) {

    printf("Before replacement: v1 = %d, v2 = %d\n", v1, v2);
    
    int temp;
    temp = *v1;
    *v1 = *v2;
    *v2 = temp;

    printf("After replacement: v1 = %d, v2 = %d\n", v1, v2);
}

int main() {

    int a = 10, b = 9;
    printf("Before replacement: a = %d, b = %d\n", a, b);

    swap(a, b);
    swap_pointer(&a, &b);

    printf("After replacement: a = %d, b = %d\n", a, b);
    return 0;
}