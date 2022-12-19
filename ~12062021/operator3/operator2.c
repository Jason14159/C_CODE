#include <stdio.h>

void main() {
	
	int a = 21;
	int c;
	c = a;
	printf("Line1 : = , c = %d\n", c);
	c += a;
	printf("Line2 : += , c = %d\n", c);
	c -= a;
	printf("Line3 : -= , c = %d\n", c);
	c *= a;
	printf("Line4 : *= , c = %d\n", c);
	c /= a;
	printf("Line5 : /= , c = %d\n", c);
	c = 200;
	c %= a;
	printf("Line6  %= , c = %d\n", c);
	c <<= 2;
	printf("Line7 : <<= , c = %d\n", c);
	c >>= 2;
	printf("Line8  : <<= , c = %d\n", c);
	c &= 2;
	printf("Line8 : &= , c = %d\n", c);
	c ^= 2;-
	printf("Line9 : ^= , c = %d\n", c);
	c |= 2;
	printf("Line10 : |= , c = %d\n", c);	
	
}

/* 
0000 0010
0000 0000 
0000 0010
*/