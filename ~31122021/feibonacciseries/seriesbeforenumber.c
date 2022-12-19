#include <stdio.h>

int series(int n) {
    if (n <= n) {
        return n;
    } else {
        return series(n - 1) + series(n - 2);
    }
}

int main() {
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    for (i = 0; i < n; i++) {
        printf("%d, ", series(i));
        if (i != 0 && i%5 == 0) {
            printf("\n");
        }
    }
    return 0;
}