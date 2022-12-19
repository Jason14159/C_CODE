/*
    计算两个时间的差值，要求得到如下结果：
*/

#include <stdio.h>
#include <string.h>

typedef struct {
    int seconds;
    int minutes;
    int hours;
} Time;

int checkTime(Time time);
void printTime(Time time);
void swap(Time *time1, Time *time2);
Time subtract1(Time *first, Time *second);
Time subtract(Time *first, Time *second); 

int main() {
    Time time1;
    Time time2;
    Time time3;
    char againch[5] = "y";

    while (strcmp(againch, "y") == 0 || strcmp(againch, "Y") == 0) {
        int again = 1;
        while (again) {
            printf("输入时间1：");
            scanf("%d:%d:%d", &time1.hours, &time1.minutes, &time1.seconds);
            if (checkTime(time1)) {
                printf("输入时间格式错误！请重新输入\n");
                again = 1;
            } else {
                again = 0;
            }
        }
        again = 1;
        while (again) {
            printf("输入时间2：");
            scanf("%d:%d:%d", &time2.hours, &time2.minutes, &time2.seconds);
            if (checkTime(time2)) {
                printf("输入时间格式错误！请重新输入\n");
                again = 1;
            } else {
                again = 0;
            }
        }
        swap(&time1, &time2);
        printf(" ");
        printTime(time1);
        printf(" - ");
        printTime(time2);
        time3 = subtract(&time1, &time2);
        printf(" = ");
        printTime(time3);
        printf("\n");
        printf("继续[y/n]?:");
        scanf("%s", againch);
    }

    return 0;
}

int checkTime(Time time) {
    return ((time.hours > 24 || time.hours < 0) || (time.minutes >= 60 || time.minutes < 0) || (time.seconds >= 60 || time.minutes < 0));
}

//输出按个数输出时间

void printTime(Time time) {
    printf("%d:%d:%d", time.hours, time.minutes, time.seconds);
}

void swap(Time *time1, Time *time2) {
    if (time2->hours > time1->hours) {
        time2->hours ^= time1->hours;
        time1->hours ^= time2->hours;
        time2->hours ^= time1->hours;
        time1->minutes ^= time2->minutes;
        time2->minutes ^= time1->minutes;
        time1->minutes ^= time2->minutes;
        time1->seconds ^= time2->seconds;
        time2->seconds ^= time1->seconds;
        time1->seconds ^= time2->seconds;
    }
    else if (time2->minutes > time1->minutes && time1->hours == time2->hours) {
        time1->minutes ^= time2->minutes;
        time2->minutes ^= time1->minutes;
        time1->minutes ^= time2->minutes;
        time1->seconds ^= time2->seconds;
        time2->seconds ^= time1->seconds;
        time1->seconds ^= time2->seconds;
    }
    else if (time2->seconds > time1->seconds && time1->minutes == time2->minutes) {
        time1->seconds ^= time2->seconds;
        time2->seconds ^= time1->seconds;
        time1->seconds ^= time2->seconds;
    }
}

//计算两个时间的差

Time subtract(Time *first, Time *second) {
    Time result;
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