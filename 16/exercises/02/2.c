#include <stdio.h>

// a
struct {
	double real;
	double imaginary;
} c1 = { 0.0, 1.0 }, c2 = { 1.0, 0.0 }, c3; // b

int main(void) {
	// c
	// c1 = c2;	

	// d
	c3.real = c1.real + c2.real;
	c3.imaginary = c1.imaginary + c2.imaginary;
	return 0;
}
