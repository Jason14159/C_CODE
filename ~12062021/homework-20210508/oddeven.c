#include <stdio.h>
#include <stdlib.h>

/* 
	分析：
		偶数取模为零；基数取模不为零
*/

int main (int i) {
	
	// 偶数
	for (i == 1; i < 20; i++) {
		if ((i % 2) == 0) {
			printf("偶数：%d\n", i);
		}
	}
	
	// 奇数
	for (i == 1; i < 20; i++) {
		if ((i % 2) != 0) {
			printf("奇数：%d\n", i);
		}
	}
	
	return 0;
}