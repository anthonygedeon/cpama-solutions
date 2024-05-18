#include <stdio.h>

int main(void) {
	int n;

	printf("Enter a number: ");
	scanf("%d", &n);

	for (int i = 1, s = 0; s < n; i++) {
		if (i % 2 == 0) {
			s = i * i;
			printf("%d\n", s);
		}
	}

	return 0;
}
