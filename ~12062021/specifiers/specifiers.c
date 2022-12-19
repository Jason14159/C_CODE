#include <stdio.h>

int main() {

    printf("Integers: %i %u \n", -3456, 3456);
    printf("Characters: %c %c \n", 'z', 80);
    printf("Decimals: %d %lld\n", 1997, 17179607040L);
    printf("Some different display formats: %d %x %o %#x %xo \n", 100, 100, 100, 100, 100);
    printf("Floats: %4.2f %+.0e %E \n", 3.14159, 3.14159, 3.14159);
    printf("Preceding with empty spaces: %10d \n", 1997);
    printf("Preceding with zeros: %010d\n", 1997);
    printf("Width: %*d \n", 15, 140);
    printf("%s %c \n", "iBot Academy", 33);
    
    return 0;
}