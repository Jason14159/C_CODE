/* 
0478/22/M/J/16

The manager of a building materials delivery service needs a program to check the contents and weight of saks to ensure
that correct orders are made up for delivery. A price for the order will be calculated. 

Write and test a program for the manager. 

    - Your program must include appropriate prompts for the entry of data.
    - Error messages and other output need to be set out clearly.
    - All variables, constants and other identifiers must have meaningful names.

TASK 1 - Check the contents and weight of a single sack.

Each sack must obey the following rules to be accepted:

    - Contain cement (C), gravel (G) or sand (S), with a letter on the side for easy identification
    - Sand or gravel must weigh over 49.9 and under 29.1 kilograms.

Input and store the weight and contents of one sack. The contents must be checked and an incorrect sack rejected. 
The weight must be validated on entry and an overweight and underweight sack rejected.

Output the contents and weight of an accepted sack. If a sack is rejected, output the reason(s)

*/


#include <stdio.h>
#include <stdlib.h>

int main() {

    enum contents {cement = 1, gravel, sand}

    printf("Enter the content of the cement (1 - cement, 2 - gravel, 3 - sand): ");

}