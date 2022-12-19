#include <stdio.h>
#include <time.h>

// 输入3个数 a, b, c，并按大小顺序输出（利用指针变量）

// void swap(int *m, int *n) {
//     int t;
//     t = *m;
//     *m = *n;
//     *n = t;
// }


void bubble_sort(int arr[], int len) {
    int i, j, temp;
    for (i = 0; i < len; i++) {
        for (j = 0; j < len - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[4] = {1, 3, 2, 4}, length;
    length = sizeof(arr) / sizeof(int);
    bubble_sort(arr, length);

    for (int i = 0; i < 4; i++) {
        printf("arr=%d\n", arr);
    }
    return 0;
}
// int main() {
//     int a, b, c;
//     int *p1, *p2, *p3;

//     printf("输入a,b,c:\n");
//     scanf("%d %d %d", &a, &b, &c);

//     p1 = &a;
//     p2 = &b;
//     p3 = &c;

//     if (a > b) {
//         swap(p1, p2);
//     }
//     if (a > c) {
//         swap(p1, p3);
//     }
//     if (b > c) {
//         swap(p2, p3);
//     }

//     printf("输出a,b,c:\n");
//     printf("%d %d %d\n", a, b, c);
//     return 0;
// }