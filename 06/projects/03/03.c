#include <stdio.h>

int main(void) {
	int num, den, a, b;

	printf("Enter a fraction: ");
	scanf("%d/%d", &num, &den);
	
	a = num, b = den;
	while (b) {
		int tmp = b;
		b = a % b;
		a = tmp;
	}

	printf("In lowest terms: %d/%d", num/a, den/a);

	return 0;
}
