#include <stdio.h>

void selection_sort(int a[], int n) {
	if (n == 0) return;

	int max = a[0], index = 0;

	for (int i = 0; i < n; i++) {
		if (max < a[i]) {
			max = a[i];
			index = i;
		}
	}
	
	a[index] = a[n - 1];
	a[n - 1] = max;

	selection_sort(a, n - 1);
}

// didn't include user input since it's not about recursion
int main(void) {
	int a[] = { 11, 3, 76, 10, 1, -100 };
	selection_sort(a, 6);

	printf("[ ");
	for (int i = 0; i < 6; i++) {
		printf("%d ", a[i]);
	}
	printf("]\n");
	return 0;
}
