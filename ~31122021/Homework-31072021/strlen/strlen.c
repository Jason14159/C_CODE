/*
    2.写一个函数，求一个字符串的长度，在main函数中输入字符串，并输出起长度、
    要求做两次，一次用strlen()编写函数，另一次不用strlen()。
*/

#include <stdio.h>
#include <string.h>
#define N 100

//不用
int returnLengthofString(const char *s) {
    int i = 0;
    while (*s != '\0') {
        i++;
        s++;
    }
    return i;
}

//用
int returnLengthofString2(const char *s) {
    return strlen(s);
}

int main() {

    int len, len2;
    char s[N];
    printf("请输入字符串:");
    gets(s);
    len = returnLengthofString(s);
    len2 = returnLengthofString2(s);
    printf("字符串长度:%d（不用strlen）%d（用strlen）\n", len, len2);
    return 0;
}