#include <stdio.h>

int printf2(char n) {
	char i = 0;
	for (i = 0; i < 8; i ++) {
		if(n & (0x80) >> i) {
			printf("1");
		} else {
			printf("0");
		} 
 	}
	printf("\n");
	return 0;
}

void main() {
	int d;
	printf("Input a number: ");
	scanf("%d", &d);
	printf2(d);
}