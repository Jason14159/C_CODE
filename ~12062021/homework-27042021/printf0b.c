#include <stdio.h>

int main() {
	int a = 1;
	int b = 2;
	int c = 4;
	int d = 8;
	int e = 16;
	int f = 32;
	int x;
	
	x = a & b;
	printf("x=%d\n", x);
	
	x = c | d;
	printf("x=%d\n", x);
	
	x = e ^ f;
	printf("x=%d\n", x);
	
	x = ~a;
	printf("x=%d\n", x);
	
	x = b >> a;
	printf("x=%d\n", x);
	
	x = f << c;
	printf("x=%d\n", x);
	
}