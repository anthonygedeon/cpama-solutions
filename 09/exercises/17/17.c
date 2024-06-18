#include <stdio.h>
int fact(int n) {
	int f = 1;
	for (int i = n; i > 0; i--) {
		f *= i;
	}
	return f;
}

int main(void) {
	printf("%d\n", fact(10));
	return 0;
}
