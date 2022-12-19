/*
    1.计算一个50-100个字符的字符串中的元音、辅音、空白符的个数。（不要求使用字符串函数）
*/  

#include <stdio.h>

int main() {
    char line[50];
    int i, vowels, consonants, digits, spaces;
    vowels = consonants = digits = spaces = 0;

    printf("请输入一个字符串：");
    gets(line);
    for (i = 0; line[i] != '\0'; i++) {
        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || 
        line[i] == 'u' || line[i] == 'A' || line[i] == 'E' || line[i] == 'I' || 
        line[i] == 'O' || line[i] == 'U') {
            ++vowels;
        } else if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z')){
            ++consonants;
        } else if (line[i] >= '0' && line[i] <= '9') {
            ++digits;
        } else if (line[i] == ' ') {
            ++spaces;
        }
    }
    printf("元音：%d\n", vowels);
    printf("辅音：%d\n", consonants);
    printf("数字：%d\n", digits);
    printf("空白符：%d", spaces);
}