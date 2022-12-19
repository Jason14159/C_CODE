#include <stdio.h>

double revenue, tax, get;
int num;

int main() {
    
    printf("How much money do you earn annully?");
    scanf("%lf", &revenue);

    if (revenue <= 14000) {
        tax = revenue * 0.105;
    } 
    if (revenue > 14000 && revenue <= 48000) {
        tax = 14000 * 0.015 + (revenue - 14000) * 0.175;
    }
    if (revenue > 48000 && revenue <= 74000) {
        tax = 14000 * 0.105 + (48000 - 14000) * 0.175 + (revenue - 48000) * 0.3;
    }
    if (revenue > 70000) {
        tax = 14000 * 0.105 + (48000 - 14000) * 0.175 + (70000 - 48000) * 0.3 * (revenue - 70000) * 0.33;
    }
    get = revenue - tax;
    printf("You will have to pay &lf tax and will have %f\n", tax, get);

    num = (int)revenue;
    num = (int)(revenue + 0.5);
    switch(num) {
        case 0 ... 14000:
            tax = num * 0.105;
        case 14001 ... 48000:
            tax = 14000 * 0.105 + (num - 14000) * 0.175;
        case 48001 ... 70000:
            tax = 14000 * 0.105 + (48000 - 14000) * 0.175 + (num - 48000) * 0.3;
        default:
            tax = 14000 * 0.105 + (48000 - 14000) * 0.175 + (70000 - 48000) * 0.3 * (num - 48000) * 0.33;
    }   
    getchar();
    getchar();
}