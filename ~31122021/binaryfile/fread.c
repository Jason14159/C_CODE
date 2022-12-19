//fread() fwrite() fseek() comprehensive example
#include <stdio.h>
#include <string.h>

void main() {
    FILE *fp;
    char c[] = "This is the iBot Acadamy";
    char buffer[100];

    fp = fopen("C:/MyC/Code/~3112202/binaryfile/file.txt", "w+");
    fwrite(c, strlen(c) + 1, 1, fp);
    fseek(fp, 0, SEEK_SET);
    fread(buffer, strlen(c) +1, 1, fp);
    printf("%s\n", buffer);
    fclose(fp);
}