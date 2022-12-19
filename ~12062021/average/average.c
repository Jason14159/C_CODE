#include <stdio.h>

void main() {

    int marks[] = {3, 44, 38, 5, 47, 15, 36, 26, 27, 2, 46, 4, 19, 50, 48, 33, 22, 127, 155, 20, 31, 45, 89, 68, 72};
    
    int i, n;
    float average, sum = 0.0;
    n = (int) (sizeof(marks) / sizeof(marks[0]));
    for (i = 0; i < n; ++i) {

        sum += marks[i];
    }
    average = sum / n;
    printf("average = %f\n", average);
}