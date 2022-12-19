#include <stdio.h>
#include <stdlib.h>

int main() {

    /* 
    0x12C
    oxB73
    */
    char szValue[]  =   "0xB73";     
    int nValue    =   0;         
    sscanf(szValue,"%x",&nValue);     
    char szValue2[]  =   "0x12C";     
    int nValue2    =   0;         
    sscanf(szValue2,"%x",&nValue2);  

    printf("nvalue=%d\nnvalue2=%d\n", nValue, nValue2);

    char str1[10]; 
    char str2[10];

    itoa(nValue, str1, 2);
    printf("%s\n", str1);

    //左移1-5位
    

    itoa(nValue2, str2, 2);
    printf("%s", str2);
}