#include <stdio.h>

void main() {
    FILE *fp;
    fp = fopen("C:/MyC/Code/~31122021/binaryfile/file.txt", "w+");
    fputs("This is the iBot Acadamy", fp);
    fseek(fp, 7, SEEK_SET);
    fputs("C Programming Language", fp);
    fclose (fp);
}