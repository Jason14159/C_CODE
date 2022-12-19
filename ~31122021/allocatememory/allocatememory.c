#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char name[100];
    char *description;
    strcpy(name, "Zara Ali");
    description =(char *) malloc(100 * sizeof(char));
    if (description == NULL) {
        fprintf(stderr, "Failed to allocate memory\n");
    } else {
        strcpy(description, "Zara Ali is a DPS in class 10th");
    }
    printf("Name: %s\n", name);
    printf("Description: %s\n", description);
}