#include <stdio.h>

int main(void) {
	int c, first_letter;

	printf("Enter a first and last name: ");

	while ((c = getchar()) == ' ') // skip all spaces
		;	

	first_letter = c;

	while ((c = getchar()) != ' ')
		;	
	
	while ((c = getchar()) != '\n') {
		putchar(c);
	}

	printf(", %c.", first_letter);

	return 0;
}
