#include<stdio.h>

double func(int x, int y) {
	if (y > 0) {
		return (double)x*func(x, y - 1);
	}
	if (0 == y) {
		return 1;
	}
	if (y <= 0) {
		return 1 / func(x, -y);
	}
}

int main() {
	int n = 0;
	int k = 0;
    scanf("%d %d", &n, &k);
    double ret = func(n, k);
	printf("%lf\n", ret);
	return 0;
}
