#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define MAX 26

void read_word(int counts[MAX]) {
	int c;
	while ((c = getchar()) != '\n') {
		counts[tolower(c) - 'a']++;
	}
}

bool equal_array(int counts1[MAX], int counts2[MAX]) {
	for (int i = 0; i < MAX; i++) {
		if (counts1[i] != counts2[i]) {
			return false;
		}
	}
	return true;
}

int main(void) {
	while (true) {
		int alphabets_1[MAX] = { 0 };
		int alphabets_2[MAX] = { 0 };

		printf("Enter first word: ");
		read_word(alphabets_1);

		printf("Enter second word: ");
		read_word(alphabets_2);

		if (equal_array(alphabets_1, alphabets_2)) {
			printf("The words are anagrams.\n");
		} else {
			printf("The words are not anagrams.\n");
		}

		printf("\n");
	}

	return 0;
}
