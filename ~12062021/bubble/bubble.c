#include <stdio.h>
#include <time.h>
#include <dos.h>

void bubble_sort(int arr[], int len) {

    clock_t t0, t1;
    t0 = clock();
    int i, j, temp;

    for (i = 0; i < len; i++) {

        for (j = 0; j < len - 1; j++) {

            if (arr[j] > arr[j + 1]) {

                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    t1 = clock();

    printf("Time taken: %f seconds\n", CLK_TCK);
}

void main() {

    int arr[] = {3, 44, 38, 5, 47, 15, 36, 26, 27, 2, 46, 4, 19, 50, 48};
    int i;
    int len = (int)sizeof(arr) / sizeof(*arr);
    bubble_sort(arr, len);

    for (i = 0; i < len; i++) {

        printf("%d ", arr[i]);
    }

    printf("\n");
}

// //* recursive sorting

int main() {

    clock_t s, e;
    s = clock();
    sleep(1);
    e = clock();
    printf("Time taken: %f seconds\n", CLK_TCK);
}