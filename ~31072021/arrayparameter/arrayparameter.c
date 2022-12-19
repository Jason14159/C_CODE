#include <stdio.h>

void change(int b[]) {
    b[1] = 10;
}
int main() {

    int a[4] = {1, 2, 3, 4};
    change(a);
    printf("a[1] = %d", a[1]);
    return 0;
}