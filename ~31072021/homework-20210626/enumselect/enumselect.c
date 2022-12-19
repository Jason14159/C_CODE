#include <stdio.h>

//用枚举类型编写一个程序，让用户选择今天是星期几?
int main() {

    enum week {Mon = 1, Tue, Wed, Thu, Fri, Sat, Sun} day;
    printf("Please enter today's day of the week: ");
    scanf("%d", &day);

    switch (day) {
        case Mon: printf("Today is Monday"); break;
        case Tue: printf("Today is Tuesday"); break;
        case Wed: printf("Today is Wednesday"); break;
        case Thu: printf("Today is Thursday"); break;
        case Fri: printf("Today is Friday"); break;
        case Sat: printf("Today is Saturday"); break;
        case Sun: printf("Today is Sunday");break;
        default: printf("Invalid date!"); break;
    }
    return 0;
}