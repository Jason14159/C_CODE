#include <stdio.h>
#include <time.h>

void getSeconds(unsigned long *par);

void main() {
    unsigned long sec;
    getSeconds(&sec);
    printf("number of seconds: %ld\n", sec);
}

void getSeconds(unsigned long *par) {
    *par = time(NULL);
}