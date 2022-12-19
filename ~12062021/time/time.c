#include <stdio.h>
#include <time.h>

void test() {

    int i = 0;
    int sum = 0;
    int j = 0;

    for (i = 0; i < 777777777; i++) {

        sum = 0;

        for (j = 0; j < 1; j++) {

            sum += j;
        }
    }

}
int main() {

    time_t start_t, end_t;
    double diff_t;
    time(&start_t);

    test();

    time(&end_t);
    diff_t = difftime(&end_t, start_t);

    printf("执行时间 %.10f", diff_t);

    return 0;
}
