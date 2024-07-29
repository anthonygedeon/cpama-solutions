#include <stdio.h>

void reverse_v1(void) {
	char msg[100];
	
	printf("Enter a message: ");
	int c, len = 0;
	while ((c = getchar()) != '\n') {
		msg[len++] = c;
	}
	
	printf("Reversal is: ");
	for (int i = len - 1; i >= 0; i--) {
		printf("%c", msg[i]);
	}
}

void reverse_v2(void) {
	char msg[100];
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

int main(void) {
	reverse_v1();
	printf("\n");
	reverse_v2();

	return 0;
}
