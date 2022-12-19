/*
    1. 建立一个5个元素的数组，让用户输入数组内容，然后分别用数组下标（索引）\
    数组名、指针和指针的指针把数组元素打印出来。
*/

#include <stdio.h>

void main() {

    static int arr[5];
    
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    //数组下标
    for (int i = 0; i < 5; i++) {
        printf("arr[%d]=%d\n", i, *(arr + i));
    }
    printf("\n");

    //数组名
    for (int i = 0; i < 5; i++) {
        printf("arr[%d]=%d\n", i, arr[i]);
    }
    printf("\n");

    //指针
    int *p = arr;
    for (int i = 0; i < 5; i++) {
        printf("arr[%d]=%d\n", i, *(p + i)); 
        
    }    

    printf("\n");
    //指针的指针
    int **pptr = &p;
    for (int i = 0; i < 5; i++) {
        printf("arr[%d]=%d\n", i, *(*pptr + i));
    }
}