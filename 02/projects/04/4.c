#include <stdio.h>

int main(void) {
	float amount = 0.0f;

	printf("Enter an amount: ");
	scanf("%f", &amount);

	printf("With tax added: $%.2f\n", amount + (amount * 0.05));

	return 0;
}

