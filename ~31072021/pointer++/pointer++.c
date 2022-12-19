#include <stdio.h>

const int MAX = 3;

int main() {
    int var[] = {10, 100, 200};
    int i, *ptr;

    ptr = var;
    i = 0; //
    while (ptr <= &var[MAX - 1]) {
        printf("Storage address: var[%d] = %x\n", i, ptr);
        printf("Storage value: var[%d] = %d\n", i, *ptr);
        ptr++;
        i++;
    }
    return 0;
}