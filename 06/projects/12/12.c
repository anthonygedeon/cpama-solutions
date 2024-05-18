#include <stdio.h>

// TODO: I don't know if I understand the problem correctly
int main(void) {
	int n, s;

	printf("Enter a value: ");
	scanf("%d", &n);

	printf("Enter a stopping value: ");
	scanf("%d", &s);

	float e = 1.0f;
	for (int i = 1; i <= n; i++) {
		float factorial = 1.0;
		for (int j = 1; j <= i; j++) {
			factorial *= j;
		}
		float term = 1 / factorial;
		e = e + term;

		if (term < s) break;
	}

	printf("e approximation: %f", e);

	return 0;
}
