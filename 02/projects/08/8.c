#include <stdio.h>

int main(void) {
	float loan = 0.0f;
	float rate = 0.0f;
	float payment = 0.0f;

	printf("Enter amount of loan: ");
	scanf("%f", &loan);

	printf("Enter interest rate: ");
	scanf("%f", &rate);

	printf("Enter monthly payment: ");
	scanf("%f", &payment);
	
	float monthly_rate = loan * (rate / 100) / 12; 
	loan = loan - (payment - monthly_rate);
	printf("Balance remaining after first payment: %.2f\n", loan);

	monthly_rate = loan * (rate / 100) / 12; 
	loan = loan - (payment - monthly_rate);
	printf("Balance remaining after second payment: %.2f\n", loan);

	monthly_rate = loan * (rate / 100) / 12; 
	loan = loan - (payment - monthly_rate);
	printf("Balance remaining after third payment: %.2f\n", loan);

	return 0;
}
