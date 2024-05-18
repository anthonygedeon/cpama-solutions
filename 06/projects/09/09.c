#include <stdio.h>

int main(void) {
	float loan = 0.0f, rate = 0.0f, payment = 0.0f;

	printf("Enter amount of loan: ");
	scanf("%f", &loan);

	printf("Enter interest rate: ");
	scanf("%f", &rate);

	printf("Enter monthly payment: ");
	scanf("%f", &payment);
	
	int payments_made;
	printf("Enter the number of payments: ");
	scanf("%d", &payments_made);

	for (int i = 1; i <= payments_made; i++)	{
		float monthly_rate = loan * (rate / 100) / 12; 
		loan = loan - (payment - monthly_rate);
		printf("Balance remaining after %d payment: %.2f\n", i, loan);
	}

	return 0;
}
