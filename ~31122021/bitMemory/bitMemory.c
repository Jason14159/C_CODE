#include <stdio.h>
#include <string.h>

struct {
    unsigned int widthValidated;
    unsigned int heightValidated;
} status1;

struct {
    unsigned int widthValidated: 32;
    unsigned int heightValidated: 32;
} status2;

int main() {
    printf("Memory size occupied by status1: %d\n", sizeof(status1));
    printf("Memory size occupied by status2: %d\n", sizeof(status2));
}
