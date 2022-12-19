#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct stu {
    int id;
    char name[100];
    int age;
};
struct stu s1;

void read_file(char *filename) {
    FILE *fd = fopen(filename, "rb");
    if (fd == NULL) {
        perror("Read file open failed");
        exit(1);
    }
    fclose(fd);
}

void write_file(char *filename) {
    FILE *fd = fopen(filename, "wb");
    s1.id = 77;
    s1. age = 17;
    strcpy(s1.name, "yang");
    
    if (fd == NULL) {
        perror("Write file open failed!");
        exit(1);
    }
    fwrite(&s1, sizeof(s1), 1, fd);
    fclose(fd);
}

void modify(char *filename) {
    FILE *fd = fopen(filename, "rb+");
    if (fd == NULL) {
        perror("Modify file open failed!");
        exit(17);
    }
    while (1) {
        int res = fread(&s1, sizeof(s1), 1, fd);
        if (res <= 0) {
            break;
        }
        if (s1.id == 77) {
            s1.age = 22;
            strcpy(s1.name, "yangni");
            fseek(fd, sizeof(s1), SEEK_CUR);
            fwrite(&s1, sizeof(s1), 1, fd);
            break;
        }
    }
}

void main() {
    write_file("C:/MyC/Code/~31122021/mytest/mytest.txt");
    read_file("C:/MyC/Code/~31122021/mytest/mytest.txt");
    printf("%d %d %s\n", s1.id, s1.age, s1.name);
    modify("C:/MyC/Code/~31122021/mytest/mytest.txt");
    printf("%d %d %s\n", s1.id, s1.age, s1.name);
}