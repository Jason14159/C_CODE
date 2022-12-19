#include <stdio.h>
#include <float.h>

int main() {
    printf("Float maximum number of bytes stored: %d\n", sizeof(float));
    printf("Float minimum value: %E\n", FLT_MIN);
    printf("Float maximum value: %E\n", FLT_MAX);
    printf("Precision value: %d\n", FLT_DIG);
    return 0;
}