#include <stdio.h>

int main(void) {
	int a, b;

	printf("Enter two integers: ");
	scanf("%d %d", &a, &b);

	while (b) {
		int tmp = b;
		b = a % b;
		a = tmp;
	}

	printf("Greatest commond divisor: %d", a);

	return 0;
}
