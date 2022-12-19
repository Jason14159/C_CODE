#include <stdio.h>

void main() {
    int ins = 0;
    printf("输出指定数量(1)或输出指定数字前(2)");
    scanf("%d", &ins);
    if (ins == 1) {
        int t1 = 0, t2 = 1, nextTerm = 0, n;
        printf("Insert a number: ");
        scanf("%d", &n);
        printf("Series: %d, %d, ", t1, t2);
        nextTerm = t1 + t2;
        while (nextTerm <= n) {
            printf("%d, ", nextTerm);
            t1 = t2;
            t2 = nextTerm;
            nextTerm = t1 + t2;
        }
    }
    else if (ins == 2) {
        long long int i, n, t1 = 0, t2 = 1, nextTerm;
        printf("Number of terms: ");
        scanf("%d", &n);
        printf("Series: ");
        for (i = 1; i <= n; ++i) {
            printf("%d, ", t1);
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
        }
    }
    else {
        printf("ERROR!");
    }
}
