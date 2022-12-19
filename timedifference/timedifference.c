#include <stdio.h>
#include <string.h>

typedef struct {
    int seconds;
    int minutes;
    int hours;
} TIME;

int checkTIME(TIME TIME);
void printTIME(TIME TIME);
void swap(TIME *TIME1, TIME *TIME2);
TIME subtract1(TIME *first, TIME *second);
TIME subtract(TIME *first, TIME *second); 

int main() {
    TIME TIME1;
    TIME TIME2;
    TIME TIME3;
    char againch[5] = "y";

    while (strcmp(againch, "y") == 0 || strcmp(againch, "Y") == 0) {
        int again = 1;
        while (again) {
            printf("输入时间1：");
            scanf("%d:%d:%d", &TIME1.hours, &TIME1.minutes, &TIME1.seconds);
            if (checkTIME(TIME1)) {
                printf("输入时间错误！\n");
                again = 1;
            } else {
                again = 0;
            }
        }
        again = 1;
        while (again) {
            printf("输入时间2：");
            scanf("%d:%d:%d", &TIME2.hours, &TIME2.minutes, &TIME2.seconds);
            if (checkTIME(TIME2)) {
                printf("输入时间格式错误！\n");
                again = 1;
            } else {
                again = 0;
            }
        }
        swap(&TIME1, &TIME2);
        printf(" ");
        printTIME(TIME1);
        printf(" - ");
        printTIME(TIME2);
        TIME3 = subtract(&TIME1, &TIME2);
        printf(" = ");
        printTIME(TIME3);
        printf("\n");
        printf("继续[y/n]?:");
        scanf("%s", againch);
    }

    return 0;
}

int checkTIME(TIME TIME) {
    return ((TIME.hours > 24 || TIME.hours < 0) || (TIME.minutes >= 60 || TIME.minutes < 0) || (TIME.seconds >= 60 || TIME.minutes < 0));
}

//输出按个数输出时间

void printTIME(TIME TIME) {
    printf("%d:%d:%d", TIME.hours, TIME.minutes, TIME.seconds);
}

void swap(TIME *TIME1, TIME *TIME2) {
    if (TIME2->hours > TIME1->hours) {
        TIME2->hours ^= TIME1->hours;
        TIME1->hours ^= TIME2->hours;
        TIME2->hours ^= TIME1->hours;
        TIME1->minutes ^= TIME2->minutes;
        TIME2->minutes ^= TIME1->minutes;
        TIME1->minutes ^= TIME2->minutes;
        TIME1->seconds ^= TIME2->seconds;
        TIME2->seconds ^= TIME1->seconds;
        TIME1->seconds ^= TIME2->seconds;
    }
    else if (TIME2->minutes > TIME1->minutes && TIME1->hours == TIME2->hours) {
        TIME1->minutes ^= TIME2->minutes;
        TIME2->minutes ^= TIME1->minutes;
        TIME1->minutes ^= TIME2->minutes;
        TIME1->seconds ^= TIME2->seconds;
        TIME2->seconds ^= TIME1->seconds;
        TIME1->seconds ^= TIME2->seconds;
    }
    else if (TIME2->seconds > TIME1->seconds && TIME1->minutes == TIME2->minutes) {
        TIME1->seconds ^= TIME2->seconds;
        TIME2->seconds ^= TIME1->seconds;
        TIME1->seconds ^= TIME2->seconds;
    }
}

//计算两个时间的差

TIME subtract(TIME *first, TIME *second) {
    TIME result;
    if (first->seconds >= second->seconds) {
        result.seconds = first->seconds - second->seconds;
    } else {
        first->minutes = first->minutes - 1;
        first->seconds = first->seconds + 60;
        result.seconds = first->seconds - second->seconds;
    }
    if (first->minutes >= second->minutes) {
        result.minutes = first->minutes - second->minutes;
    } else {
        first->hours = first->hours - 1; 
        first->minutes = first->minutes + 60;
        result.minutes = first->minutes - second->minutes;
    }
    result.hours = first->hours - second->hours;
    return result;
}