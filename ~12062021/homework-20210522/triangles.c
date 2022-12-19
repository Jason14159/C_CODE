#include <stdio.h>
#include <math.h>

void main() {

    int i, j, k, height;

    printf("Enter the height of the triangle: ");
    scanf("%d", &height);

    for (i = 0; i < height; i++) {
        for (j = 1; j < 1 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // ***********************************************

    for (i = 0; i < height; i++) {
        for (k = 1; k <= height - i; k++) {
            printf(" ");
        }
        for (j = 1; j < 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    //? **********************************************

    for (i = 1; i <= height; i++) {
        for (k = 1; k <= height - i; k++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}