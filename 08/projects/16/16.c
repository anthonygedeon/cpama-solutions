#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define MAX 26

int main(void) {
	while (true) {
		int alphabets[MAX] = { 0 };

		printf("Enter first word: ");

		int c;
		while ((c = getchar()) != '\n') {
			alphabets[tolower(c) - 'a']++;
		}

		printf("Enter second word: ");
		while ((c = getchar()) != '\n') {
			alphabets[tolower(c) - 'a']--;
		}

		int max = 0;
		for (int i = 0; i < MAX; i++) {
			if (max < alphabets[i]) {
				max = alphabets[i];
			}
		}

		if (max == 0) {
			printf("The words are anagrams.\n");
		} else {
			printf("The words are not anagrams.\n");
		}

		printf("\n");
	}

	return 0;
}
