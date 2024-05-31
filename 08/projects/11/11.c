#include <stdio.h>

#define MAX 15

int main(void) {
	int numeric[MAX];

	printf("Enter phone number: ");

	int c, i = 0;
	while ((c = getchar()) != '\n') {
		if (c == 'A' || c == 'B' || c == 'C') {
			numeric[i++] = '2';
		} else if (c == 'D' || c == 'E' || c == 'F') {
			numeric[i++] = '3';
		} else if (c == 'G' || c == 'H' || c == 'I') {
			numeric[i++] = '4';
		} else if (c == 'J' || c == 'K' || c == 'L') {
			numeric[i++] = '5';
		} else if (c == 'M' || c == 'N' || c == 'O') {
			numeric[i++] = '6';
		} else if (c == 'P' || c == 'R' || c == 'S') {
			numeric[i++] = '7';
		} else if (c == 'T' || c == 'U' || c == 'V') {
			numeric[i++] = '8';
		} else if (c == 'W' || c == 'X' || c == 'Y') {
			numeric[i++] = '9';
		} else {
			numeric[i++] = c;
		}
	}

	printf("In numeric form: ");
	for (int i = 0; i < MAX; i++) {
		printf("%c", numeric[i]);
	}

	return 0;
}
