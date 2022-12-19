#include <stdio.h>

void main() {
    // struct Date {
    //     int year;
    //     int month;
    //     int day;
    // };
    struct Student {
        char *name;
        // struct Date birthday;
        int age;
    };
    struct Student stu;

    // stu.name = "Johnson W";
    // stu.birthday.year = 1982;
    // stu.birthday.month = 9;
    // stu.birthday.day = 10;
    struct Student stul = {"Johnson", 38};

    struct Student stu2 = stul;

    // printf("The student name: %s\n", stu.name);
    printf("The name is %s and the age is %d.\n", stu2.name, stu2.age);
}