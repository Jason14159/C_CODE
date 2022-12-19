#include <stdio.h>

int main(int argc, char *argv) {
    if (argc == 3) {
        printf("The document supplied is %s %s\n", argv[1], argv[2]);
    }
    else if (argc > 3) {
        printf("Too many arguments\n");
    }
    else {
        printf("One argument expected\n");
    }
}