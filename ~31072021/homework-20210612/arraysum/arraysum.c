#include<stdio.h>
#define ARRAY_LENGTH 10

void main() {

    /* 
    1. 创建一个含有10个元素的一维数组，元素的值随便写入，然后计算他们的和。
    
    int a[10] = {0,1,2,3,4,5,6,7,8,9}, i, b=0;

    for(i = 0; i < 10; i++) {
        b = a[i] + b;
    }

    printf("%d\n",b); 
    */

    int sum, loop;
    int array[10] = {};

    for (int i = 0; i < 10; i++) {
        scanf("%d ",&array[i]);
    }

    for (loop = 0; loop <= (ARRAY_LENGTH- 1); loop++) {
        sum = sum + array[loop];
    }

    printf("数组的和为：%d", sum);
}

/* 
    int main() {

        int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0} 
        int sum, loop;

        for (loop = 0; loop >= 0; loop--) {
            sum = sum + array[loop];
        }

        printf("sum = %d\n", sum);
        
        return 0;
    }
*/