#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void hexToBin(int num) {

    int res;
    int i = 0;
    char buf[BUFSIZ][5] = {"0000"};
    char reference[16][5] = {"0000","0001","0010","0011",\
                        "0100","0101","0110","0111",\
                        "1000","1001","1010","1011",\
                        "1100","1101","1110","1111"};

    while(num / 16 !=  0) {
        res = num % 16;
        strcpy(buf[i++], reference[res]);
        num = num / 16;
    }

    res = num % 16;
    strcpy(buf[i++], reference[res]);

    while(i > 0) {
        printf("%s ", buf[--i]);
    }
    printf("\n");
}

void num1() {

    printf("Binary of 0x12C is ");

    int num = 0x12C;

    hexToBin(num);
    printf("Denary of 0x12C is %d\n\n", num);

    for (int i = 1; i < 6; i ++) {

        num = num << 1;
        if (i == 1) {
            printf("0x12C after shifting %d position to the left is %d\n", i, num);
        } else {
            printf("0x12C after shifting %d positions to the left is %d\n", i, num);
        }
        
    }

    printf("\n\n");

    num = 0x12C;

    for (int i = 1; i < 6; i ++) {

        num = num >> 1;
        if (i == 1) {
            printf("0x12C after shifting %d position to the right is %d\n", i, num);
        } else {
            printf("0x12C after shifting %d positions to the right is %d\n", i, num);
        }
        
    }

    printf("\n\n");
}

void num2() {

    printf("Binary of 0xB73 is ");

    int num = 0xB73;

    hexToBin(num);
    printf("Denary of 0xB73 is %d\n\n", num);
        for (int i = 1; i < 6; i ++) {

            num = num << 1;
            if (i == 1) {
                printf("0x12C after shifting %d position is %d\n", i, num);
            } else {
                printf("0x12C after shifting %d positions is %d\n", i, num);
            }
        
        }

    printf("\n\n");

    num = 0xB73;

    for (int i = 1; i < 6; i ++) {

        num = num >> 1;
        if (i == 1) {
            printf("0xB73 after shifting %d position to the right is %d\n", i, num);
        } else {
            printf("0xB73 after shifting %d positions to the right is %d\n", i, num);
        }
        
    }

    printf("\n\n");

}


int main() {

    num1();
    num2();
    return EXIT_SUCCESS;
    getchar();
}
