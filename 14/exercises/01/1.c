#include <stdio.h>

// a
#define CUBE(x) ((x) * (x) * (x))

// b
#define REMAINDER(x) ((x) % 4)

// c
#define PRODUCT(x, y) ((x) * (y) < 100 ? 1 : 0)

int main(void) {
	printf("%d\n", CUBE(10));
	printf("%d\n", REMAINDER(10));
	printf("%d\n", PRODUCT(10, 9));
	return 0;
}
