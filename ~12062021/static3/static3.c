#include <stdio.h>

/* int main(void) {
	int i;
	char str[10];
	for (i = 0; i < 10; i++) {
		printf("str%d: %d\n",  i, str[i]);
	}
	return 0;
}
 */
int main(void) {
	int i;
	static char str[10];
	for (i = 0; i < 10; i++) {
		printf("str%d: %d\n",  i, str[i]);
	}
	return 0;
}