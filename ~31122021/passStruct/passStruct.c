#include <stdio.h>

struct student {
    int age;
};

void test (struct student stu) {
    printf("Formal parameters before modification: %d\n", stu.age);
    stu.age = 10;
    printf("Formal parameters after modification: %d\n", stu.age);
}

int main() {
    struct student stul = {30};
    printf("Actual parameters before modification: %d\n", stul.age);
    test(stul);
    printf("Actual parameters after modification: %d\n", stul.age);
    return 0;
}