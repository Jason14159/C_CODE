#include <stdio.h>

void main() {
	int n1, n2, n3;
	printf("Insert 3 numbers [bar] [temp] [speed]: ");
	
	scanf("%d %d %d", n1, n2, n3);
	(n1 > 5 && n1 <= 5) ? printf("nothing\n") : printf("alarm rings\n");
	(n3 > 1 && n2 <= 200) ? printf("nothing") : printf("alarm rings");
	
	getchar();
}