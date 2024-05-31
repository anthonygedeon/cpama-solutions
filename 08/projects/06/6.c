#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>

#define MAX 100

int main(void) {
	char message[MAX];

	printf("Enter message: ");

	int c, i = 0;
	while ((c = getchar()) != '\n') message[i++] = toupper(c);

	printf("In B1FF-speak: ");
	for (int i = 0; message[i] != '\0'; i++) {
		char b1ff = message[i];
		switch(b1ff) {
			case 'A':
				putchar('4');
				break;
			case 'B':
				putchar('8');
				break;
			case 'E':
				putchar('3');
				break;
			case 'I':
				putchar('1');
				break;
			case 'O':
				putchar('0');
				break;
			case 'S':
				putchar('5');
				break;
			default:
				putchar(b1ff);
				break;
		}
	}
	printf("!!!!!!!!!!!\n");

	return 0;
}
