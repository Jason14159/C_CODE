#include <stdio.h>

void main() {
    int ch;
    char ch2n = 'M';
    for (ch = 65 ;  ch <= 90 ; ch++) {
        printf("ASCII value = %d, Character = %c\n", ch, ch);
        if (ch < ch2n) printf ("\t%c < %c\n", ch, ch2n);
        else if (ch > ch2n) printf ("\t%c > %c\n", ch, ch2n);
        else printf ("\t%c = %c\n", ch, ch2n);
    }
}