#include <math.h>
#include <stdio.h>

int compute(int x) {
	return (3 * pow(x, 5)) + (2 * pow(x, 4)) - (5 * pow(x, 3)) - pow(x, 2) + (7 * x) - 6;
}

int main(void) {
	int x;
	printf("Enter a value: ");
	scanf("%d", &x);
	printf("%d\n", compute(x));
	return 0;
}
