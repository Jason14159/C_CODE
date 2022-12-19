#include <stdio.h>

int n = 10; 	// global variables

void func1() {
	int n = 20;		//local variables
	printf("func1 n: %d\n", n);
}

void func2(int n) {
	printf("func2 n: %d\n", n);
}

void func3() {
	printf("func3 n: %d\n", n);
}

int main() {
	int n = 30;		//local variables
	func1();
	func2(n);
	func3();
	// the code is surrounded by {}
		{
			int n = 40;		//local variables
			printf("block n: %d\n", n);
		}
	
	printf("main n: %d\n", n);
	return 0;
}