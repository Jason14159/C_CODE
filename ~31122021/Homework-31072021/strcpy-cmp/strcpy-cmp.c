/* 
    4.按照字典顺序将用户输入的10个字符串排序，要求使用strcpy和strcmp函数。
*/

#include <stdio.h>
#include <string.h>

int main () {
    int i, j;
    char str[10][50], temp[50];

    printf("输入10个单词：");
    for (i = 0; i < 10; ++i) {
        scanf("%s[^\n]", str[i]);
    }
    for (i = 0; i < 9; ++i) {
        for (j = i + 1; j < 10; ++j) {
            if (strcmp(str[i], str[j]) > 0) {
                strcpy(temp, str[i]);
                strcpy(temp, str[j]);
                strcpy(str[j], temp);
            }
        }
    }
    printf("\n排序后：\n");
    for (i = 0; i < 10; ++i) {
        puts(str[i]);
    }

    /* 
        C C++ Java PHP Python Perl Ruby R JavaScript PHP
    */
    return 0;
}