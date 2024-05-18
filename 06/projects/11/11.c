#include <stdio.h>

int main(void) {
	int n;

	printf("Enter a value: ");
	scanf("%d", &n);

	float e = 1.0f;
	for (int i = 1; i <= n; i++) {
		float factorial = 1.0;
		for (int j = 1; j <= i; j++) {
			factorial *= j;
		}
		e = e + (1 / factorial);
	}

	printf("e approximation: %f", e);

	return 0;
}
