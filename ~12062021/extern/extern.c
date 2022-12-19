#include <stdio.h>
#include "C:\MyC\extern\addtwonum.c"

// define the variables x and y outside the function
extern int x;		// global variables
extern int y;		// global variables

int main() {
	int result;
	result = addtwonum();
	result = addtwonum();
	printf("result is: %d\n", result);
	return 0;
}