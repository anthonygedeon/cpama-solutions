#include <stdio.h>

#define ROW 7
#define COL 24

int find_largest(int a[], int n) {
	int *largest = a;

	for (int *p = a; p < a + n; p++) {
		if (*largest < *p) {
			largest = p;
		}
	}

	return *largest;
}

int main(void) {
	int temps[ROW][COL] = { [0][0] = 123, [1][0] = 9323, [1][3] = 10000, [6][11] = 32 };
	
	for (int (*row)[COL] = temps; row < temps + ROW; row++) {
		printf("%d\n", find_largest(row[0], COL));
	}

	return 0;
}
