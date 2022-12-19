#include <stdio.h>

FILE *fp;
char p[1000];
char s1[100] = {0};
char s2[100] = {0};
int x = 0;
int y = 0;
int n = 0;
char a;

int main() {
    fp = fopen("C:/MyC/Code/~31122021/text/text.txt", "r");
        while (!feof(fp)) {
            fgets(p, sizeof(p), fp);
            printf("%s", p);
            n = 0;
            while (p[n] != '\n') {
                a = p[n];
                if ((a >= '0' && a <= '9') || (a == ':') || (a == ',')) {
                    s1[x] = a;
                    x++;
                    printf("%s", a);
                }
                else if ((a >= 'a' && a <= 'z') || a == ' ') {
                    s2[y] = a;
                    y++;
                    printf("%s", a);
                }
                else if (a == '<') {
                    while (p[n] != '>') {
                        n ++;
                    }
                    s2[y] = ' ';
                    y++;
                }
                n++;
            }
            printf("%s", p);
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
        printf("%s\n", p);
    } 
}
