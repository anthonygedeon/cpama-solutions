#include <stdio.h>

int *find_middle(int a[], int n) { 
	// a is an address
	return (a + (n / 2));
}

int main(void) {
	int a[] = { 0, 1, 2, 3, 4 };
	printf("%d\n", *find_middle(a,  5));
	return 0;
}
