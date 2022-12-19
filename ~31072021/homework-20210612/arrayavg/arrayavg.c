#include <stdio.h>

/* 2. 编写一个程序，让使用者输入一个数组的值，首先询问使用者你要建立多少个元素的数组？
要求这个数组的元素数组在1-100之间，如果使用者输入的元素个数超过这个范围，则输出错误信息，
并要求从新输入。当数组元素的数量确定后，提示用户输入每个数组元素的值，当所有数组元素都被输入完成，
计算苏哦有数组元素的平均值，并输出。

1.输入元素数量（一维数组）
2.判断输入的范围有没有超过要求
3.使用for循环迭代出元素
4.将元素相加
5.获取元素个数
6.除以元素个数
*/

int main() {

    int i, size, sum = 0, loop, array[] = {};
    float avg;

    printf("Enter the length of the array: ");
    scanf("%d", &size);

    if (size < 1 || size > 100) {
        printf("Input illegal. Try again");
    }

    for (i = 0; i < size; i++) {
        scanf("%d ", &array[size]);
    }

    for (loop = 0; loop < size; loop++) {
        sum = sum + array[loop];
    }

    avg = (float)sum / size;

    printf("Average = %f", avg);
    return 0; 
}