#include <stdio.h>

int x = 1;
int y = 2;

int addtwonum() {
	extern int x; 		// please cancel this extern to try it
	extern int y;		// please cancel this extern to try it
	x = 1;
	y = 2;
	return x + y;
}