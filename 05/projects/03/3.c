#include <stdio.h>

// TODO
int main(void) {
	int shares;
	float commission, price;

	printf("Enter number of shares: "); 
	scanf("%d", &shares);

	printf("Enter the price per share: ");
	scanf("%f", &price);

	if (price < 2500.00f)
		commission = 30.00f + .017f * price; 
	else if (price < 6250.00f)
		commission = 56.00f + .0066f * price; 
	else if (price < 20000.00f)
		commission = 76.00f + .0034f * price; 
	else if (price < 50000.00f)
		commission = 100.00f + .0022f * price; 
	else if (price < 500000.00f)
		commission = 155.00f + .0011f * price; 
	else
		commission = 255.00f + .0009f * price;

	if (commission < 39.00f) {
		commission = 39.00f;
	}

	printf("Commission: $%.2f\n", commission); 
	return 0;
}
