#include <stdio.h>

#define MAX 20

int main(void) {
	int c, first_letter;

	char last_name[MAX];

	printf("Enter a first and last name: ");

	while ((c = getchar()) == ' ') // skip all trailing spaces
		;	
	first_letter = c;
	
	while ((c = getchar()) != ' ') // skip first name
		;
	
	int i = 0;
	while ((c = getchar()) != '\n') {
		last_name[i++] = c;
	}

	for (int i = 0; last_name[i] != '\0'; i++) {
		printf("%c", last_name[i]);
	}

	printf(", %c.", first_letter);

	return 0;
}
