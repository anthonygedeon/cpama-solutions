#include <stdio.h>

void find_two_largest(int *a, int n, int *largest, int *second_largest) {
	for (int *p = a; p < a + n; p++) {
		if (*largest < *p) {
			*largest = *p;
		}
	}

	for (int *p = a; p < a + n; p++) {
		if (*second_largest < *p && *p != *largest) {
			*second_largest = *p;
		}
	}
}

int main(void) {
	int a[] = { 1, 382, 8888, 2093, 9991 };

	int al = 0, bl = 0;
	find_two_largest(a, 5, &al, &bl);

	printf("%d %d\n", al, bl);

	return 0;
}
