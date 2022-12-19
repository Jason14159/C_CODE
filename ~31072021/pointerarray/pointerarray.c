#include <stdio.h>

int main() {

    //define an array of type int
    int a[2];
    //define a pointer of type int
    int *pointer;
    //Assign value to a[0] = 5
    a[0] = 5;
    //let the pointer to the 0th element of the array
    pointer = &a[0];
    //modify the value of the pointed-to element
    *pointer = 10;
    //print the value of the first element
    printf("a[0] = %d\n", a[0]);
    return 0;
}