#include <stdio.h>

int main(void) {
	int number = 0;
	int digits = 0;

	printf("Enter a number: ");
	scanf("%d", &number);
	if (number > 0 && number <= 9) digits = 1;
	else if (number <= 99) digits = 2;
	else if (number <= 999) digits = 3;
	else if (number <= 9999) digits = 4;
	else printf("error\n"); return -1;

	printf("The number %d has %d digit(s)\n", number, digits);

	return 0;
}
