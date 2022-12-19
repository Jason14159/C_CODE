#include <stdio.h>

void array() {

    int ary[6] = {0, 1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++) {

        printf("%d ", ary[i]);
    }
    
    printf("\n");

    for (int i = 0; i < 5; ++i) {

        printf("%d ", ary[i]);
    }

    printf("\n");
}

void main() {

    array();

    int ary[6] = {0, 1, 2, 3, 4, 5};
    for (int i = 0; i < 5;) {

        printf("%d ", ary[i++]);
    }

    printf("\n");

    for (int i = 0; i < 5;) {

        printf("%d ", ary[++i]);
    }

    printf("\n");
}