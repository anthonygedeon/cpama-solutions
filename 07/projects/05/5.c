#include <ctype.h>
#include <stdio.h>

int main(void) {
	int c, points, score = 0;
	
	while ((c = getchar()) != '\n') {
		switch(toupper(c)) {
			case 'A':  
			case 'E':
			case 'I':
			case 'L':
			case 'N':
			case 'O':
			case 'R':
			case 'S':
			case 'T':
			case 'U':
				points = 1;
				break;

			case 'D': case 'G':
				points = 2;
				break;

			case 'B': 
			case 'C':
			case 'M': 
			case 'P':
				points = 3;
				break;

			case 'F': 
			case 'H':
			case 'V': 
			case 'W':
			case 'Y':
				points = 4;
				break;
			case 'K': 
				points = 5;
				break;
			case 'J': case 'X': 
				points = 8;
				break;

			case 'Q': case 'Z': 
				points = 10;
				break;
		}

		score += points;
	}

	printf("Scrabble value %d\n", score);

	return 0;
}
