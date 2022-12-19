#include <stdio.h>

int main(int argc, char **argv) {
    struct person {
        char name;
        long long int property;
        int age;
    } PERSON;

    printf("person=%d\n", PERSON.name);
}