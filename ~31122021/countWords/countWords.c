#include <stdio.h>

int main() {
    int i, flag = 0, number = 0;
    char str[20];
    printf("Please enter a string: ");
    gets(str);
    
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            flag = 0;
        } else {
            if (flag == 0) {
                flag = 1;
                number++;
            }
        }
    }
    if (number == 1) {
        printf("There are 1 word\n");
        printf("flag=%d", flag);
    } else {
        printf("There are %d words\n", number);
        printf("flag=%d", flag);
    }
}