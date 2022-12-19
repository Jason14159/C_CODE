#include <stdio.h>

int main() {

    char a, b, c, x;
    printf("Enter 3 characters: \n");
    scanf("%c %c %c", &a, &b, &c);
    if(a < b) {

        x = a;
        a = b;
        b = x;
    }

    if(a < c) {

        x = a;
        a = c;
        c = x;
    }

    if(b < c) {

        x = b;
        b = c;
        c = x;
    }
    printf("After rearranging: %c,%c,%c\n",a,b,c);
}
