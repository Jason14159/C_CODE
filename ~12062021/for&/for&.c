#include <stdio.h>

void main() {
	for (int x = 0; x < 2; x++) { 
		for (int y = 0; y < 2; y++) {  
			printf("x=%d, y=%d\n", x, y);   
		}
	}
	
	printf("\n");
	
	for (int x = 0, y = 0; x < 4, y < 4; x++, y < 1? y : y++) {
		printf("x=%d, y=%d\n", x, y);
	}
} 