#include <stdio.h>

void main() {
    FILE *fp;
    int i, j;

    fp = fopen("C:/MyC/Code/~06152022/MYFILE.txt", "w+");
    i=fputs("This is c programming. \n", fp);
    j=fputs("This is a system programming language", fp);
    fclose(fp);
    printf("You wrote %d and %d bytes", i, j);

    // FILE *fp = NULL;
    // fp = fopen("C:/MyC/Code/~06152022/MYTEST.txt", "w+");
    // fprintf(fp, "This is testing for fputs...\n", fp);
    // fclose(fp);
    // printf("Please open your file and look:\
    //     C:/MyC/Code/~06152022/MYFILE.txt");
}