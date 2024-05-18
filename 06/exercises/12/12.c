#include <stdio.h>

// TODO
int main(void) {
	int d, n = 10;

	for (d = 2; d < n; d++) {
		if (n % d == 0) {
			break;
		}
	}

	return 0;
}
