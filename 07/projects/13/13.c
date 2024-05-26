#include <stdio.h>
#include <stdbool.h>

int main(void) {
	int nw, nc, c;

	int is_word = false;

	printf("Enter a sentence: ");

	while ((c = getchar()) != '\n') {
		if (c != ' ') {
			nc++;
			is_word = false;
		} else {
			is_word = true;
		} 

		if (c == '.') is_word = true;

		if (is_word) nw++;
	}
	printf("%d %d\n", nc, nw);
	printf("Average word length: %.1f", (float)nc / nw);
	return 0;
}
