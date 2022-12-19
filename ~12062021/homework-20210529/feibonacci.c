#include <stdio.h>

int main() {

    long long int i, n, f1 = 1, f2 = 1, f;

    printf("Enter a number of terms: ");
    scanf("%d", &n);

    if (n == 1) {

        printf("0, ");
    } else if (n <= 2) {

        printf("0, 1, 1,");
    } else {

        printf("0, 1, ");

        for (f1 = 1; f1 < n; f1++) {

            printf("%d, ", f1);
            f = f1 + f2;
            f1 = f2;
            f2 = f;
        }
    }

    return 0;
}