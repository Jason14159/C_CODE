/* 
    3.连接两个字符串 要求做两次，一次用strcat函数，另一次不用。
*/

#include <stdio.h>
#include <string.h>

void mergeStr() {
    char s1[30];
    char s2[10];
    int len1, len2; //字符串1、2的长度
    int i;
    printf("请输入字符串1：\n");
    gets(s1);
    printf("请输入字符串2：\n");
    gets(s2);

    len1 = strlen(s1);
    len2 = strlen(s2);

    for (i = 0; i <= len2; i++) {
        s1[len1 + i] = s2[i];
    }

    printf("合并后：%s\n", s1);
    printf("用strcat后：%s", strcat(s1, s2));
}

int main() {
    mergeStr();
}
