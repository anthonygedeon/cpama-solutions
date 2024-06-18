#include <stdio.h>

// TODO
double median(double x, double y, double z) {
	double middle = 0.0;

	if (x <= y) {
		if (y <= z) return y; 
		else if (x <= z) return z; 
		else return x; 
	}

	if (z <= y) return y; 
	if (x <= z) return x; 

	return z;
}

int main(void) {
	printf("%lf\n", median(1.0, 2.0, 3.0));
	return 0;
}
