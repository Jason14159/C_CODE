#include <stdio.h>
#include <math.h>

/* int main() {

    int a[3][3], b[3][3], c[3][3] = 0, arr1[3][3], arr2[3][3], i, j, k;

    printf("输入a[3][3]:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d ", &a[i][j]);
        }
    }
    
    printf("输入b[3][3]:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d ", &b[i][j]);
        }
    }
    // for (i = 0; i < 3; i++) {
    //     for (j = 0; j < 3; j++) {
    //         printf("%d ", a[i][j]);
    //     printf("    ");
    //     }
    //     for (j = 0; j < 3; j++) {
    //         printf("%d ", b[i][j]);
    //     printf("\n");
    //     }
    // }

    printf("\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                c[i][j] = a[i][k] * b[k][j];
            }
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			a[i][j] = b[j][i];
        }
    }

    printf("After transposing\n");

    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j) {
            printf("%d ", b[j][i]);
        }
        printf("\n");
    }
	return 0;

} */


int main() {

    int a[3][3], b[3][3], c[3][3] = {0}, i, j, k;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d ", &a[i][j]);
        }
    }

    printf("\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}