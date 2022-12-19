// 00:00:09,950 --> 00:00:18,390 hello and welcome back to<font color="#CCCCCC">english today</font>”
// 转换为(Transfer to)：
// “[00:09.95] hello and welcome back to english today”
// char * strncat(char *dest, const char *src, size_t n);
#include <stdio.h>
#include <string.h>

int n = 0;
char a;
char p[] = "00:00:09,950 --> 00:00:18,390 hello and welcome back to<font color=\"#CCCCCC\">english today</font>";
char s1[100] = {0};
char s2[100] = {0};
int x = 0;
int y = 0;

char readFile(char *buffer) {
    while (p[n] != '\0') {
        a = p[n];
        if ((a >= '0' && a <= '9') || (a == ':') || (a == ',')) {
            s1[x] = a;
            x++;
        }
        else if ((a >= 'a' && a <= 'z') || a == ' ') {
            s2[y] = a;
            y++;
        }
        else if (a == '<') {
            while (p[n] != '>') {
                n += 1;
            }
            s2[y] = ' ';
            y++;
        }
        n += 1;
    }
    char s3[100] = {0};
    char t;
    int k = 0;
    while (k <= 7) {
        t = s1[k + 3];
        s3[k] = t;
        k++;
    }
    printf("[");
    printf("%s", s3);
    printf("]");
    printf("%s\n", s2);
}

int main() {
    readFile(p);
}

