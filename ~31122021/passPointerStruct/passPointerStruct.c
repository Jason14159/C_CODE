#include <stdio.h>

void main() {
    struct Student {
        char *name;
        int age;
    };
    struct Student stu = {"MJ", 27};
    struct Student *p;
    p = &stu;
    // method 1
    printf("name=%s, age=%d\n", stu.name, stu.age);
    // method 2
    printf("name=%s, age=%d\n", (*p).name, (*p).age);
    // method 3
    printf("name=%s, age=%d\n", p -> name, p -> age);
}