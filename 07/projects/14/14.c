#include <stdio.h>
#include <math.h>

// TODO
int main(void) {
	double x, y, result;

	printf("Enter a positive number: ");
	scanf("%lf", &x);
	
	y = 1;
	while (1) {
		double avg = x / y;
		y = avg;
		printf("y: %lf\n", y);
	}

	// printf("Square root: %lf\n", );

	return 0;
}
