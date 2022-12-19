#include <stdio.h>
#include <stdlib.h>

void main(int i) {
	for (i = 1; i < 20; i ++) {
		if (i % 3 == 0) {
			printf("能被3整除的数：%d\n", i);
		}
	}
}