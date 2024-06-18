#include <stdio.h>

double inner_product(double a[], double b[], int n) {
	double sum = 0.0;
	for (int i = 0; i < n; i++) {
		sum = sum + (a[i] * b[i]);
	}
	return sum;
}

int main(void) {
	double a[] = { 1, 2, 3 };
	double b[] = { 1, 2, 3 };
	printf("%lf\n", inner_product(a, b, 3));
	return 0;
}
