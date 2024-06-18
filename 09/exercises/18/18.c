#include <stdio.h>

int gcd(int a, int b) {
	if (b == 0) {
		return a;
	} else {
		return gcd(b, a % b);
	}
}

int main(void) {
	printf("%d\n", gcd(5, 10)); // 5
	return 0;
}
