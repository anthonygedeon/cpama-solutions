#include <stdio.h>

int gcd(int a, int b) {
	while (b) {
		int tmp = b;
		b = a % b;
		a = tmp;
	}
	return a;
}

int main(void) {
	printf("%d\n", gcd(5, 10)); // 5
	return 0;
}
