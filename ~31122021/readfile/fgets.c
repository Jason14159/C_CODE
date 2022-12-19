#include <stdio.h>

void main() {
    FILE *fp = NULL;
    char buff[255];
    char *b;

    fp = fopen("C:/MyC/Code/~31122021/readfile/new.txt", "r");
    // fscanf(fp, "%s", buff);
    // printf("1: %s", buff);
    /*
    fgets(buff, 255, (FILE*)fp);
    printf("%s", buff);
    fgets(buff, 255, (FILE*)fp);
    printf("2: %s\n", buff);
    fclose(fp); 
    */
    /* 
    b = fgets(buff, 255, (FILE*)fp);
    printf("%s", b);
    fgets(buff, 255, (FILE*)fp);
    printf("2: %s\n", buff);
    fclose(fp);
    */
    /*
    while (!feof(fp)) {
        fgets(buff, 255, (FILE*)fp);
        printf("%s", buff);
    }
    fclose(fp);
    */
    /*
    while (!feof(fp)) {
        b=fgets(buff, 255, fp);
        printf("%s", b);
    }
    fclose(fp);
    */
    /*
    while (fgets(buff, 255, fp) != NULL) {
        printf("%s", buff);
    } 
    fclose(fp);
    */
    while (feof(fp)) {
        fgets(buff, 255, fp);
        printf("%s", fp);
    }
    fclose(fp);
}