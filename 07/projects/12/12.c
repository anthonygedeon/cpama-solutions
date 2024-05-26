#include <stdio.h>

// TODO
int main(void) {
	float num_1, num_2, result;

	printf("Enter an expression: ");
	
	while(1) {
		scanf("%f", &num_1);

		char operator = getchar();
		
		scanf("%f", &num_2);

		switch (operator) {
			case '+':
				result = num_1 + num_2;
				num_1 = result;
				break;
			case '-':
				result = num_1 - num_2;
				num_1 = result;
				break;
			case '*':
				result = num_1 * num_2;
				num_1 = result;
				break;
			case '/':
				if (num_2 == 0) {
					printf("can't divide by zero\n");
					return -1;
				}
				result = num_1 / num_2;
				num_1 = result;
				break;
		}


		printf("current expression: %.2f %c %.2f = %.2f\n", num_1, operator, num_2, result);

	} 
	
	printf("Value of expression: %.1f\n", result);

	return 0;
}
