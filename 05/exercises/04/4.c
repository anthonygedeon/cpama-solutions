#include <stdio.h>

int main(void) {
	int i = 2;
	int j = 1;     
	int value = (i > j) - (i < j);

	printf("%d\n", value);
	return 0;
}
