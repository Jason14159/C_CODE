#include <stdio.h>

int main() {

    int arr[3][3], arr2[3][3], temp[3][3], arr_after_transposition[3][3], i, j;

    printf("Enter values in the first array:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d ", &arr[i][j]);
        }
    } 

    printf("Enter values in the second array:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d ", &arr2[i][j]);
        }
    }

    printf("\n");

    printf("Values in the first array are:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("Values int he second array are:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            temp[i][j] = arr[i][j] * arr2[i][j];
        }
    }

    printf("The values of the array after multiplication are:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", temp[i][j]);
            arr_after_transposition[j][i] = temp[i][j];
        }
        printf("\n");
    }


    printf("The values of the array after being transposed are:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", arr_after_transposition[i][j]);
        }
        printf("\n");
    }

    return 0;
}