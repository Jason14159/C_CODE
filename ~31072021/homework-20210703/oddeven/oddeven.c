/* 
    2.将一个数组拆分为两个数组，一个为奇数数组，一个为偶数数组，分别存储在两个数组中，然后打印出来结果像
    这样，要求用指针数组完成。
*/

#include <stdio.h>

//! 改成指针数组！

int main() {
    int array[10] = {0, 11, 3, 4, 4, 345, 5, 45, 234, 45};
    int even[10], odd[10];
    int loop, e, d, *ptr, *ptr2;

    e = d = 0;

    for (loop = 0; loop < 10; loop++) //判断数组里每一个元素的奇偶性，然后如果是偶数的话 就e++
    {
        if (array[loop] % 2 == 0) 
        {
            even[e] = array[loop];
            e++; //even
        }
        else
        {
            odd[d] = array[loop]; //奇数d++
            d++; //odd
        }
    }
    
    printf("原始数组: ");

    for (loop = 0; loop < 10; loop++) {
        printf(" %d", array[loop]);
    }

    printf("\n偶数: ");
    for (loop = 0; loop < e; loop++) {
        printf(" %d", even[loop]);
    }

    printf("\n奇数：");
    for (loop = 0; loop < d; loop++) {
        printf(" %d", odd[loop]);
    }

    return 0;
}