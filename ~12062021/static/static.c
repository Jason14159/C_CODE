#include <stdio.h>

int fun(void) {
	static int count1 = 10;
	// int count1 =10;
	// this assignment statement has only been executed once
	// count1--;
	// return count1--;
	return count1 = count1 - 1;
}

int count =1;

int main(void) {
	printf("global\t\tlocal static\n");
	for(; count <= 10; ++count) 
		printf("%d\t\t%d\n", count,fun());
}
