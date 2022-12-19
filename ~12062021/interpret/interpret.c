#include <stdio.h>

void main() {

    int num1, num2, num3;

    printf("Without 3rd variable\n");
    printf("Enter the first number: ");
    scanf("%d", &num1);                       
    printf("Enter the second number: ");
    scanf("%d", &num2);

    /*
    1st number is 1;
    2nd number is 2;
    */

    printf("After swapping, first number is %d\n", num2);
    printf("After swapping, second number is %d\n", num1);

    /* 
    1st number is 2;
    2nd number is 1;
    */
   
    printf("\n");
    printf("\n");

    printf("With 3rd variable\n");
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    num3 = num1;
    num1 = num2;

    printf("After swapping, first number is %d\n", num1);

    num2 = num3;

    printf("After swapping, second number is %d\n", num3);
}