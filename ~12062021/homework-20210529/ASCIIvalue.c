#include <stdio.h>

int main() {

    char c1;;
    printf("Enter a character: ");

    scanf("%c", &c1);
    printf("The ASCII value for %c is %d\n", c1, c1);
    printf("The ASCII value for %c is %#x", c1, c1);
}