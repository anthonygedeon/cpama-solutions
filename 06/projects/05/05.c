#include <stdio.h>
#include <math.h>

int main(void) {
	int n, a, b;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	int nn = n;
	int digits = 0;
	while (nn) {
		nn /= 10;
		digits++;
	}

	do {
		a = n % 10;
		n /= 10;
		b += a * pow(10.0, --digits);
	} while (n);

	printf("The reversal is: %d\n", b);

	return 0;
}
