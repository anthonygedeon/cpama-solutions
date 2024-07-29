#include <stdio.h>

#define N 10

void create_identity_v1(double *a) {
	int offset = 0;
	for (double *p = a; p < a + (N * N); p++) {
		*(p	+ offset++) = 1.0;
		p += N - 1; // go to the next row
	}
}

void create_identity_v2(double a[N][N], int n) {
	int offset = 0;
	for (double *p = a[0]; p < a[0] + n; p++) {
		*(p	+ offset++) = 1.0;
		p += N - 1; // go to the next row
	}
}


int main(void) {
	double ident[N][N] = { 0 }; 

	create_identity_v1(ident[0]);
	create_identity_v2(ident, N * N);

	for (int row = 0; row < N; row++) { 
		for (int col = 0; col < N; col++) {
			printf(" %.2lf ", ident[row][col]);
		}
		printf("\n");
	}
}
