#include <stdio.h>

void main() {
    FILE *fp;
    int c;

    fp = fopen("C:/MyC/Code/~06152022/MYFILE.txt", "r");
    while(1) {
        c = fgetc(fp);
        if(feof(fp)) break;
        printf("%c", c);
    }
    // 循环的存在无非就是为了每次处理序列元素中的一个元素，或者一个递增递减条件。因此我们可以将循环体处理的元素作为函数参数传递到函数中，然后在函数中处理，将continue转换为函数中的return。
    printf("\n");
    fclose(fp);
} 
