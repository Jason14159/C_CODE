#include <stdio.h>

int main() {
	int score = 77;
	
	switch (score/10) {
		case 10:
		case 9:
			printf("优秀\n");
			break;
		case 8:
			printf("良好\n");
			break;
		case 7:
		case 6:
			printf("中等\n");
			break;
		default:
			printf("差劲\n");
			break;
	}
}