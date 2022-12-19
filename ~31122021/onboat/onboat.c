#include <stdio.h>
#define N 30
#define C 9
int main(void) {
    int people[N];
    int i, j, index;
    int count;

    for (i = 0; i < N; i++) {
        people[i] = -1;
    }
    i = 0, index = 0, count = 0;
    while (i < N) {
        if (people[index] == -1)
            count++;
        if (count == C) {
            people[index] = i; 
            count = 0;       
            i++;               
        }
  
        index++;
        if (index == N)
            index = 0;
    }
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (people[j] == i && people[j] < 15)
                printf("%d ", j + 1);
        }
    }             
    return 0;
}