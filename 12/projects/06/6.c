#include <stdio.h>

// TODO: Could be wrong, can't copy-paste the program from book
#define N 10

int *split(int a[], int *low, int *high) {
	// TODO
}

void quicksort(int a[], int *low, int *high) {
	int *middle;
	if (*low >= *high) return;
	middle = split(a, low, high);
	quicksort(a, low, middle - 1);
	quicksort(a, middle - 1, high);
}



