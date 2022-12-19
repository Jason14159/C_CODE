#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int number = 348593483;
	char string[25];
	itoa(number, string, 2);
	printf("Decimal: %llu, Binary: %s\n", number, string);
	return 0;
}