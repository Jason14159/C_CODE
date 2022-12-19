#include <stdio.h>
#include <stdlib.h>
#define SQ(y) (y) * (y)

int main() {

    int a, sq;
    printf("Enter a number: ");
    scanf("%d", &a);
    sq = SQ(a + 1);
    printf("sq=%d\n", sq);
    system("pause");
    return 0;
} 