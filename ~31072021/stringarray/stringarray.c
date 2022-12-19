#include <stdio.h>
#define MAX 4

int main() {

    const char *name[] = {
        "Zara Ali",
        "Hina Ali",
        "Nuha Ali",
        "Sara Ali",
    };
    

    for (int i = 0; i < MAX; i++) {
        printf("Value of names[%d] = %s\n", i, name[i]);
    }
    return 0;
}