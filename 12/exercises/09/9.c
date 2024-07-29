#include <stdio.h>

double inner_product(const double *a, const double *b, int n) {
	double sum = 0.0;
	
	const double *ap = a, *bp = b;
	for (; ap < a + n && bp < b + n; ap++, bp++) {
		sum += (*ap * *bp);
	}

	return sum;
}

int main(void) {
	const double a[5] = {1, 2, 3, 4, 5};
    const double b[5] = {1, 2, 3, 4, 5};

	printf("%lf\n", inner_product(a, b, 5));

	return 0;
}
