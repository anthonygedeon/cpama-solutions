#include <stdio.h>

// TODO
int main(void) {
	int num1, num2, denom1, denom2, result_n, result_d;
	char operator;

	printf("Enter two fraction seperated by (+, -, *, /) sign: ");
	scanf("%d/%d %c %d/%d", &num1, &denom1, &operator, &num2, &denom2);

	switch(operator) {
		case '+':
			result_n = num1 * denom2 + num2 * denom1;
			break;
		case '-':
			result_n = num1 * denom2 - num2 * denom1;
			break;
		case '*':
			result_n = num1 * denom2 * num2 * denom1;
			break;
		case '/':
			result_n = num1 * denom2 / num2 * denom1;
			break;
	}

	result_d = denom1 * denom2;

	printf("The sum is %d/%d\n", result_n, result_d);

	return 0;
}
