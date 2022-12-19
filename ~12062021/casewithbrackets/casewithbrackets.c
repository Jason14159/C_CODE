#include <stdio.h>

void main() {
	int a = 10;
	int b = 4;
	
	char op = '-';
	
	switch (op) {
		case '+': {
			int sum = a + b;
			printf("a+b=%d\n", sum);
			break;
		}
		case '-': {
			int minus = a - b;
			printf("a-b=%d\n", minus);
			break;
		}
		default:
			printf("Unrecognized symbol");
			break;
	}
}