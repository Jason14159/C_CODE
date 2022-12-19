#include <stdio.h>

int sum(int a, int b);

void main() {
	int d = sum(10, 11);
	
	printf("d is %d\n", d);
}

int sum (int a, int b) {
	int c = a + b;
	return a + b;
}
