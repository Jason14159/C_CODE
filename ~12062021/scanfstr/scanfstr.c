#include <stdio.h>

int input() {
    
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("a=%d b=%d c=%d", a, b, c);
}

void main() {

    char str1[20], str2[30];

    printf("input username: ");
    scanf("%s", str1);

    printf("input domain name of your website: ");
    scanf("%s", str2);

    printf("\nYour username: %s\n", str1);
    printf("Domain name of your website: %s\n", str2);

    input("");
}