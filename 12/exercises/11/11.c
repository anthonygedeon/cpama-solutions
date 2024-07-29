#include <stdio.h>

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
	int a[] = { 1000, 32832, 2839819, 838238, 1111, 1000000000 };
	printf("%d\n", find_largest(a, 6));
	return 0;
}
