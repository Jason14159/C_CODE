#include <stdio.h>

int main() {
	int a = 20;
	int i, len;
	len = sizeof(int) * 2;
	printf("When a<256, its length of binary is %d bits\n", len);
	printf("Binary of %d is ", a);
	for (i = len-1; i >= 0; i--) {
		if ((1 << i) & a) {
			printf("%c", '1');
		}
		else {
			printf("%c", '0');
		}
		if (i % 4 == 0) {
			printf(" ");
		}
	}

}