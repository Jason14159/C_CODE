#include <stdio.h>
#define tokenpaster(n) printf("token" #n " = %d\n", token##n)
void main() {
    int token34 = 40;
    tokenpaster(34);
}