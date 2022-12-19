#include <stdio.h>

void main() {
	double d1;
	printf("Enter a value:");
	scanf("%llu",d1);
	
	double d2 = d1 * (1 + 0.15);
	printf("The price including GST is:%d", d2);
}