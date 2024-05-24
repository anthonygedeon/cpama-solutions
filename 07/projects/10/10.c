#include <ctype.h>
#include <stdio.h>

int main(void) {
	printf("Enter a sentence: ");

	int c, vowel_count;
	while ((c = getchar()) != '\n') {
		switch(toupper(c)) {
			case 'A': 
			case 'E':
			case 'I':
			case 'O':
			case 'U': 
				vowel_count++;
				break;
		}
	}

	printf("Your sentence contains %d vowels", vowel_count);

	return 0;
}
