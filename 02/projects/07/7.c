#include <stdio.h>

int main(void) {
	int amount = 0;

	printf("Enter a dollar amount: ");
	scanf("%d", &amount);

	int remainder_20 = amount / 20;
	printf("$20 bills: %d\n", remainder_20);
	amount = amount - (20 * remainder_20);

	int remainder_10 = amount / 10;
	printf("$10 bills: %d\n", remainder_10);
	amount = amount - (10 * remainder_10);

	int remainder_5 = amount / 5;
	printf("$5 bills: %d\n", remainder_5);
	amount = amount - (5 * remainder_5);

	int remainder_1 = amount / 1;
	printf("$1 bills: %d\n", remainder_1);
	amount = amount - (1 * remainder_1);

	return 0;
}
