#include <stdio.h>

int main() {

    int *ptr = NULL;
    printf("The address of the ptr is 0x%d\n", ptr);
    int a = sizeof(ptr);
    printf("a=%d", a);
    return 0;
}