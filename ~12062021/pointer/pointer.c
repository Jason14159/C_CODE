#include <stdio.h>
#include <stdio.h>

int main() {
	int a = 4;
	short b;
	double c;
	int *ptr;
	
	// sizeof operator instance
	printf("Line1 - The size of variable a = %lu\n", sizeof(a));
	printf("Line2 - The size of variable b = %lu\n", sizeof(b));
	printf("Line3 - The size od variable c = %lu\n", sizeof(c));
	
	// & and * operator instance
	ptr = &a;
	printf("The value of a is %d\n", a);
	printf("*ptr is %d\n", *ptr);
	
	printf("ptr=%lu\n", ptr);
	
	// X : Y operator instance
	a = 10;
	b = (a ==1) ? 20 : 30;
	printf("The value of b %d\n", b);
	
	b = (a == 10) ? 20 : 30;
	printf("The value of b %d\n", b);
}