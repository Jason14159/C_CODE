#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 10
int cmp(const void *a, const void *b);
typedef struct student
{
    char name[10];
    int year;
    int month;
    int day;
} str;
int main()
{
    str a[N];
    int n, i;
    for (i = 0; i < n; i++)
    {
        scanf("%s, %d/%d/%d", a[i].name, a[i].year, a[i].month, a[i].day);
    }
    qsort(a, n, sizeof(a[0]), cmp);
    for (i = 0; i < n; i++)
    {
        printf("%s ", a[i].name);
        printf("%d-", a[i].year);
        if (a[i].month < 10)
            printf("0");
        printf("%d-", a[i].month);
        if (a[i].day < 10)
            printf("0");
        printf("%d\n", a[i].day);
    }
}
int cmp(const void *a, const void *b)
{
    struct student *c, *d;
    c = (struct student *)a;
    d = (struct student *)b;
    if (d->month != c->month)
        return c->month - d->month;
    else
        return c->day - d->day;
}