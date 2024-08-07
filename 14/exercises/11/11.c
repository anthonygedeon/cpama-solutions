#include <stdio.h>

#define ERROR(error, index) (fprintf(stderr, #error, (index)))

int main(void) {
	int index = 10;
	ERROR("Range error: index = %d\n", index);
	return 0;
}
