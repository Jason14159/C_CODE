#include <stdio.h>

int main() {

    while (1) {
        int e;
        char ch;
        printf("\n Enter a character : ");
        scanf("%c",&ch);
        e=ch;
        printf("The ASCII value of the character is DEC is:%d\n",e);
        printf("The ASCII value of the character is HEX is:%x\n",e);
        printf("The ASCII value of the character in OCT is:%o\n",e);
        scanf("%c", &ch);
    }
    return 0;
}