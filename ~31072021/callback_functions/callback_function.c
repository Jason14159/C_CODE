#include <stdio.h>
#include <stdlib.h>
#include <crtdefs.h>

//callbackFunction

void populate_array(int *array, int arraySize, int (*getNextRandomValue)(void)) {
    for (int i = 0; i < arraySize; i++) {
        array[i] = getNextRandomValue();
    }
}

int getNextRandomValue(void) {
    return rand();
}

int main(void) {
    int myArrayy[10];
    populate_array(myArrayy, 10, getNextRandomValue);
    for (int i = 0; i < 10; i++) {
        printf("%d ", myArrayy[i]);
    }
    printf("\n");
    return 0;
}   