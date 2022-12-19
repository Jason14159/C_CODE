#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_LINE 1024
#define MAX_RECORD 100
FILE *fp;

typedef struct {
    char id[6];
    char name[6];
    char subject[4];
    int score;
}STU;
STU data[MAX_RECORD];
int count = 0;


void write_file() {
    fp = fopen("C:/MyC/Code/modifyscore/new1.txt", "wb+");
    for (int i = 0; i < count; i++) {
        fprintf(fp, "%s\t%s\t%s\t%d\n", data[i].id, data[i].name, data[i].subject, data[i].score);
    }
    fclose(fp);
}

void read_file() {
    char buf[MAX_LINE];
    char id[6];
    char name[6];
    char subject[4];
    int score;
    if ((fp = fopen("C:/MyC/Code/modifyscore/new.txt", "r")) == NULL) {
        perror("Failed to read!");
        exit(1);
    }
    while(!feof(fp)) {
        fscanf(fp, "%s %s %s %d", id, name, subject, &score);
        strcpy(data[count].id, id);
        strcpy(data[count].name, name);
        strcpy(data[count].subject, subject);
        data[count].score = score;
        count++;
        printf("%s\t%s\t%s\t%d\n", id, name, subject, score);
    } 
    printf("count=%d\n", count);
    fclose(fp);
}

int modify() {
    char read_id[6];
    char read_subject[5];
    char modify_score[5];
    fp = fopen("C:/MyC/Code/modifyscore/new.txt", "r");
    while (1) {
        int result;
        printf("Enter the student id and subject, or ctrl+Z to exit:\n");
        result = scanf("%s", read_id);
        if (result == EOF)
            break;
        result = scanf("%s", read_subject);
        if (result == EOF)
            break;
        int i = 0;
        for (i = 0; i < count; i++) {
            if (strcmp(read_id, data[i].id) == 0) {
                if (strcmp(read_subject, data[i].subject) == 0) {
                    printf("Old score: %d\n", data[i].score);
                    printf("Enter the score you want to modify: ");
                    scanf("%s", modify_score);
                    int val = atoi(modify_score); 
                    data[i].score = val;
                    break;                 
                }
            }
        }
        if (i == count) {
            printf("No matching record, enter to try again!\n");
        }
    }
    fclose(fp);
    printf("Modified data:\n");
    for (int i = 0; i < count; i++) {
        printf("%s\t%s\t%s\t%d\n", data[i].id, data[i].name, data[i].subject, data[i].score);
    }
}

void main() {
    read_file();
    write_file();
    modify();
}