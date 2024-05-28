#include <stdio.h>
#include <stdbool.h>

int main(void) {
	int digits[10] = { 0 };

	printf("Enter a number: "); 

	long n;
	scanf("%ld", &n);

	while (n > 0) { 
		int digit = n % 10; 

		digits[digit]++;

		n /= 10;
	}
	
	printf("Repeated digit(s): "); 
	for (int i = 0; i < 10; i++) {
		if (digits[i] > 1) {
			printf("%d ", i);
		}
	}
	printf("\n");

	return 0;
}
