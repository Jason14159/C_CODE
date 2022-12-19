#include <stdio.h>

int main() {

    int ch, i;
    ch = 80;
    // i = printf("ASCII value = %d, character = %c \n", ch, ch);
    i = printf("%c\n", ch);
    printf("The return value of the above printf = %d\n", i);
}