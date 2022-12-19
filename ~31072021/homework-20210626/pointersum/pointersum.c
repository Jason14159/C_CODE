#include <stdio.h>
#include <windows.h>


//编写一个函数，输入n为偶数时，调用函数1/2+1/4+...+1/n，当输入n为奇数时，调用函数1/3+1/5+...+1/n（利用指针函数）

float pEven(int n) {
	float sum = 0;
	for (float i = 2; i <= n; i += 2) {
		sum += 1 / i;
	}
	return sum;
}

float pOdd(int n) {
	float sum = 0;
	for (float i = 1; i <= n; i += 2) {
		sum += 1 / i;
	}
	return sum;
}

float dcall(float (*fp)(int n), int n) {
	float s = fp(n);
	return s;
}

int main() {
	int n = 0; 
	float sum = 0; 

	for (;;) {
		scanf("\n%d", &n);
		if (n < 1) {
			printf("Error!");
		}
		else if ((n % 2) == 0) {
			printf("Even, sum = ");
			sum = dcall(pEven, n);
		}
		else {
			printf("Odd, sum = ");
			sum = dcall(pOdd, n);
		}
		printf("%f\n", sum);
	}
	system("pause");
	return 0;
}