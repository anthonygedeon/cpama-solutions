#include <stdio.h>
int largest(int a[], unsigned int len) {
	int result = a[0];
	for (int i = 0; i < len; i++) {
		if (result < a[i]) {
			result = a[i];
		}
	}
	return result;
}

int average(int a[], unsigned int len) {
	int sum = 0;
	for (int i = 0; i < len; i++) {
			sum += a[i];
	}
	return sum / len;
}

int all_positive(int a[], unsigned int len) {
	int result = 0;
	for (int i = 0; i < len; i++) {
		if (a[i] > 0) {
			result++;
		}
	}
	return result;
}

int main(void) {
	printf("largest:   %d\n", largest((int []){ 100, 99, 83, 9, 3 }, 5));
	printf("Average:   %d\n", average((int []){ 100, 99, 83, 9, 3 }, 5));
	printf("Positives: %d\n", all_positive((int []){ 100, 99, 83, 9, 3 }, 5));

	return 0;
}
