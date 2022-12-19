/* 
    3.将一个奇数数组与一个偶数数组合并为一个数组，结果像这样，要求用指针数组完成：
*/

//! 改成指针数组！

#include <stdio.h>
#include <stdlib.h>

void mergeArray(int *a, int len_a, int *b, int len_b, int *c) {

    int *p;
    int i = 0;                     //用来判断数组a
    int j = 0;                     //用来判断数组b
    int k = 0;                     //用来标识数组c

    while (i < len_a && j < len_b) {
        if (a[i] < b[j]) {
            c[k] = a[i];
            i++;
            k++;
        }
        else {
            c[k] = b[j];
            j++;
            k++;
        }
    }

    while (i < len_a) { //数组b的值已经被移到c中，数组a的值还没有完全被移到c中
        c[k] = a[i];
        i++;
        k++;
    }
    while (j < len_b) { //数组a的值已经完全被移到c中，数组b的值还没有完全被移到c中
    
        c[k] = b[j];
        j++;
        k++;
    }
}

int main() {
    int a[5] = {1, 3, 5, 7, 9}; 
    int b[5] = {2, 4, 6, 8, 10};
    int c[10];
    int *p, i;
    int len_a = sizeof(a) / sizeof(a[0]);
    int len_b = sizeof(b) / sizeof(b[0]);

    mergeArray(a, len_a, b, len_b, c);
    for (int i = 0; i < 10; i++) { // i 小于数组长度
        printf("%p ", *(p + i));
    }
    return 0;
}