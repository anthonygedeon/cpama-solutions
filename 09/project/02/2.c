#include <stdio.h>

int compute_income_tax(int income) {
	int tax;
	if (income > 7000) {
		tax = income * 0.06 + 230.00;
	} else if (income > 5250) {
		tax = income * 0.05 + 142.50;
	} else if (income > 3750) {
		tax = income * 0.04 + 82.50;
	} else if (income > 2250) {
		tax = income * 0.03 + 37.50;
	} else if (income > 750) {
		tax = income * 0.02 + 7.50;
	} else {
		tax = income * 0.01;
	}
	return tax;
}

int main(void) {
	int income = 0;

	printf("Enter your income: ");
	scanf("%d", &income);

	printf("Taxable income: $%d\n", compute_income_tax(income));

	return 0;
}

