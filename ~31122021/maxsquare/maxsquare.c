#include <stdio.h>
#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define square(x) ((x) * (x))

void main() {
    int i;
    printf("Max between 20 and 10 is %d\n", i = MAX(10, 15));
    printf("Sqare of max number between 20 and 10 is %d\n", square(i));
}