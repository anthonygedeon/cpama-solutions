#include <stdio.h>
int num_digits(int n) {
	int len = 0;

	 while (n) {
		n /= 10;
		len++;
	}

	return len;
}

int main(void) {
	printf("%d\n", num_digits(1));

	return 0;
}
