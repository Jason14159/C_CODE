#include <stdio.h>

int main() {
	for (int x  = 0, y = 0; x < 3 && y < 4; x++, y +=2) {
		printf("x=%d, y=%d \n",  x, y);
	} 
}