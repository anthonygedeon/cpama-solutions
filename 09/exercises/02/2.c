#include <stdio.h>

int check(int x, int y, int limit) {
	return ((x >= 0 && x <= (limit - 1)) && 
			(y >= 0 && y <= (limit - 1)));
}

int main(void) {
	printf("%d\n", check(0, 0, 3));
	return 0;
}
