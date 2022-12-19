#include <stdio.h>
#include <stdlib.h>

void main() {

    int a[3][3];
    int i, j, s = 0;
    printf("Please enter each element of this 3 * 3 int array: \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 3; i++) {
        s += a[i][i];
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
    printf("The sum of the diagonal elements of this 3 * 3 int array is %d\n", s);
}