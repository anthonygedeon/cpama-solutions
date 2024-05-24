#include <stdio.h>

int main(void) {
	printf("Enter a 24-hour time: ");
	int hh, mm;
	scanf("%d:%d", &hh, &mm);

	int c;
	printf("%d:%d", hh, mm);
	while ((c = getchar()) != '\n') {
		if (c == 'p') {
			printf("pm");
		} else if (c == 'P') {
			printf("PM");
		} else if (c == 'a') {
			printf("am");
		} else if (c == 'A') {
			printf("AM");
		} else {
			putchar(c);
		}
	}

	return 0;
}
