#include <stdio.h>

int main() {

    long long int i, n, f1 = 1, f2 = 1, f;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // printf("斐波那契数列: ");

    if (n == 1) {

        printf("0");
    } else {

        printf("0, ");

        for (i = 1; i <= n; i=i+1) {

            printf("%d, ", f1);
            f = f1 + f2;
            f1 = f2;
            f2 = f;
        }
    }
    return 0;
}