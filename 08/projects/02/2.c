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

	printf("Digit:       "); 
	for (int i = 0; i < 10; i++) {
		printf("%d ", i);
	}
	printf("\n");
	
	printf("Occurrences: "); 
	for (int i = 0; i < 10; i++) {
		printf("%d ", digits[i]);
	}
	printf("\n");

	return 0;
}
