#include <stdio.h>

int main() {

    float grade;
    printf("Enter a value between 0 and 100: ");
    scanf("%f", &grade);

    int n1 = (int)grade;

    switch (n1) {

        case 90 ... 100:
            printf("Your grade is A");
            break;
        case 80 ... 89: 
            printf("Your grade is B");
            break;
        case 70 ... 79:
            printf("Your grade is C");
            break;
        case 60 ... 69:
            printf("Your grade is D");
            break;
        case 0 ... 59:
            printf("Your grade is E");
            break;
        default:
            printf("Your input is illegal, try again.");
            break;
    }
    return 0;
}