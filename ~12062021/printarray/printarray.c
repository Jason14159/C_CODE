#include <stdio.h>

int main() {

    int a[5][3] = {{0, 0, 3}, {1, 2, 3}, {3, 2, 4}, {4, 3, 6}, {7, 4, 4}};
    int i, j;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            printf("a[%d][%d] = %d\n i = %d\n j = %d\n", i, j, a[i][j]);
        }
    } 
    return 0;
}