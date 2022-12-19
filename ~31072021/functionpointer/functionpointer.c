#include <stdio.h>

int max(int x, int y) {
    return x > y ? x : y;
}

int main(void) {
    int (*p)(int, int) = &max;
    int a, b, c, d;

    printf("Input three integers: \n");
    scanf("%d %d %d", &a, &b, &c);

    // d = max(max(a, b), c);
    d = p(p(a, b), c);
    printf("The biggest number is %d\n", d);

    return 0;
}

/* 
    有一个网友对回调函数给出了通俗的解释：你到一个商店卖东西，刚好你要的东西没有货，
    于是你在店员那里留下了你的电话，过了几天店里有货了，
*/