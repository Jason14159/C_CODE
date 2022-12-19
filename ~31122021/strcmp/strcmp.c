#include <stdio.h>
#include <string.h>

int main() {
    char s1[] = "abc";
    char s2[] = "abd";
    char s3[] = "aBc";
    char s4[] = "ccb";

    printf("%d, %d, %d", strcmp(s1, s2), strcmp(s1, s3), strcmp(s1, s4));
}