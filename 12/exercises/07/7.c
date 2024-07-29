#include <stdbool.h>
#include <assert.h>

bool search(const int a[], int n, int key) {
	for (const int* p = a; p < a + n; p++) {
		if (*p == key) {
			return true;
		}
	}
	return false;
}

int main(void) {
	const int a[2] = { 123, 485 };
	assert(search(a, 2, 485));
	return 0;
}
