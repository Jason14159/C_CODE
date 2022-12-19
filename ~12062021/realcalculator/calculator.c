#include <stdio.h>
#include <math.h>
#include <float.h>
#include <limits.h>
#include <windows.h>
#include <stdlib.h>

#define PI 3.14159265358979323846
#define NATURAL_LOGARITHM 2.71828182845904523536
int a[100000];

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevinstance, PSTR szCmdLine, int iCmdShow) {

    system("color f4");
    MessageBox(NULL, TEXT("  "), TEXT("title"), MB_OK);
    return 0;
}


// int main() {

//     int n, i, j;
//     scanf("%d", &n);
//     int temp = 1;
//     a[0] = 1;
//     for (i = 2; i <= n; i++) {
//         for (j = 0; j < temp; j++) {
//             a[j] *= i ;        
//         }                 
//         for (j = 0; j < temp; j++) {
//             a[j + 1] += a[j] / 10;  
//             a[j] %= 10;  
//         }
//         if (a[j] > 0) {
//             while (a[j] > 9) {
//                 a[j + 1] += a[j] / 10;
//                 a[j] %= 10;   
//                 j++;
//             }
//             temp = j + 1;
//         }
//     }
//     for (i = temp - 1; i >= 0; i--) {
//         printf("%d", a[i]);
//     }
//     printf("\n");
//     return 0;
// }

long long int factorial() {

    static int n, i, j;
    scanf("%d", &n);
    int temp = 1;
    a[0] = 1;
    for (i = 2; i <= n; i++) {
        for (j = 0; j < temp; j++) {
            a[j] *= i ;        
        }                 
        for (j = 0; j < temp; j++) {
            a[j + 1] += a[j] / 10;  
            a[j] %= 10;  
        }
        if (a[j] > 0) {
            while (a[j] > 9) {
                a[j + 1] += a[j] / 10;
                a[j] %= 10;   
                j++;
            }
            temp = j + 1;
        }
    }
    for (i = temp - 1; i >= 0; i--) {
        printf("%d", a[i]);
    }
    printf("\n");
    return 0;
}

long long int combination() {

    factorial();
    long long int n, r, result;
    scanf("%llu %llu", &n, &r);
    
    result = factorial(n) / (factorial(r) * (factorial(n - r)));
    return result;
}

void main() {

    factorial();
    combination();
}