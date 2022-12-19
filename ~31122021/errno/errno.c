#include <stdio.h>
#include <errno.h>
#include <string.h>
int number = 0;

void main() {
    FILE *pf;
    int errnum;
    pf = fopen("C:/MyC/Code/~31122021/errno/errno.txt", "rb");
    if (pf == !NULL) {
        errnum = errno;
        fprintf(stderr, "err number: %d\n", errno);
        perror("out error via perror ");
        fprintf(stderr, "Error opening file: %s\n", strerror(errnum));
    } else {
        fclose(pf);
    }
}