#include <stdio.h>

// TODO: i don't understand the question
int power(int x, int n) {
	if (n == 0) {
		return 1; 
	} else {
		if (n % 2 == 0) {
			return power(x, n / 2) * 2;
		} else {
			return x * power(x, n - 1);
		}
	}
}

int main(void) {
	int base, exp;
	printf("Enter base: ");
	scanf("%d", &base);

	printf("Enter exponent: ");
	scanf("%d", &exp);

	printf("%d\n", power(base, exp));
	return 0;
}
