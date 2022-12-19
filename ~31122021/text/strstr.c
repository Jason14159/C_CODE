#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = {"minimi"};
    char str2[100] = {"mimimi"};
    char *str3 = strstr(str1, str2);
    printf("%s\n", str3);
    return 0;
}