#include <stdio.h>

int main() {

    /*
    A team: a, b, c
    B team: x, y, z

    a ! x
    c ! x && z
    */

    char i, j, k;

    for (i = 'x'; i <= 'z'; i++) {
        for (j = 'x'; j <= 'z'; j++) {
            if (i != j) {
                for (k = 'x'; k <= 'z'; k++) {
                    if (i != k && j != k) {
                        if(i != 'x' && k <= 'z') {
                            if (i != 'x' && k != 'x' && k != 'z') {
                                printf("A->%c\nB->%c\nC->%c\n", i, j, k);
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

