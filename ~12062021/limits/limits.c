#include <stdio.h>
#include <limits.h>

int main ()
{
	printf("long double of memory size: %u \n", sizeof(long double));
	printf("float of memory size: %d \n", sizeof(float));
	printf("double of memory size: %llu \n", sizeof(double));
	printf("int of memory size: %lu \n", sizeof(int));
				
	//%lu is a 32-bit unsigned integer
	return 0;
}