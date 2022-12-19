#include<stdio.h>
int age(int n)
{
    int x;
    if(n == 1)
        x=10;
    else
        x=age(n-1)+2;
    return x;
}
int main()
{
    int n;
    printf("input value of n:");
    scanf("%d", &n);
    printf("the %dth person has the age of %d\n", n, age(n));
    return 0;
}\