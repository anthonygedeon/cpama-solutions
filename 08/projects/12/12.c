#include <ctype.h>
#include <stdio.h>

#define MAX 26

const int points[MAX] = { 
	1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10 };

int main(void) {
	int score = 0;
	
	int c;
	while ((c = getchar()) != '\n') {
		c = toupper(c);
		if (isalpha(c))
			score += points[c - 'A'];
	}

	printf("Scrabble value: %d\n", score);

	return 0;
}
