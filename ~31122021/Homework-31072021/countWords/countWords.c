/*
    1.计算一个50-100个字符的字符串中的元音、辅音、空白符的个数。（不要求使用字符串函数）
*/                                                                                 

#include <stdio.h>

//获取字符串长度
int lengthofString(char* str) {
    char* p = str;
    while (*p != '\0') { //等同于 *p
        p++;
    }
    return p - str;
}

int main() {
    char vowel[6] = { 'a', 'e', 'i', 'o', 'u' }, consonants[21];
    char str[] = {'\0'};
    int numberofVowels = 0, numberofConsonants = 0;

    gets(str);
    for (int i = 0; i < lengthofString(str); i++) {
        for (int j = 0; j < lengthofString(str); j++) {
            if (str[i] == vowel[j]) {
                numberofVowels++;
            } else if (str[i] != consonants[j] && (str[i] != ' ')) {
                numberofConsonants++;
            }
        }
    }
    printf("vowel=%d, consonants=%d", numberofVowels, numberofConsonants);
    return 0;
}