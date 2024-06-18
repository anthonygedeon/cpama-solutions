#include <stdio.h>
int digit(int n, int k) {
	int digit = 0, tens = 10, kth = 1;
	while (k--)	{
		digit = (n % tens) / kth;
		kth = tens;
		tens *= 10;
	}
	return digit;
}

int main(void) {
	printf("%d\n", digit(829, 1));
	return 0;
}
