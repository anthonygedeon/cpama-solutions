#include <stdio.h>

void reverse(char *msg) {
	char *p = msg;
	
	printf("Enter a message: ");
	int c;
	while ((c = getchar()) != '\n') {
		*(p++) = c;
	}
	
	printf("Reversal is: ");
	while (p-- != msg) {
		printf("%c", *p);
	}
}

