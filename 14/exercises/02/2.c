#include <stdio.h>
#define NELEMS(x) ((sizeof(x))/(sizeof(x[0])))

int main(void) {
	int a[] = { 1, 2, 3, 4, 5 };
	printf("%zu\n", NELEMS(a));
	return 0;
}
