#include <stdio.h>

int main(void) {
	double n, sum = 0.0f;

	printf("This program sums a series of floating-point numbers.\n");
	printf("Enter doubles (0 to terminate): ");

	scanf("%lf", &n) ; 
	while (n != 0.0f) { 
		sum += n; 
		scanf("%lf", &n);
	}

	printf("The sum is: %lf\n", sum); 

	return 0;
}
