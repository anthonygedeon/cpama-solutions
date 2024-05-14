#include <stdio.h>

int main(void) {
	int n, a, b;
	
	printf("Enter a two-digit number: ");
	scanf("%2d", &n);

	a = n % 10;
	b = n / 10;
	n = (a * 10) + b;
	printf("The reversal is: %d\n", n);

	return 0;
}
