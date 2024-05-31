#include <stdio.h>

#define MAX 100

// TODO
int main(void) {
	char sentence[MAX];

	printf("Enter a sentence: ");

	int c, i = 0;
	while ((c = getchar()) != '\n') {
		sentence[i++] = c;
	}

	printf("Reversal of sentence: ");
	int j, end;
	for (int i = j = MAX - 1; i >= 0; i--) {
		end = MAX - 1;

		if (sentence[i] == ' ') {
			j = i;
			end = i;
		}
		
		for (; j < end; j++) {
			printf("%c", sentence[j]);
		}
	}
	printf("\n");


	return 0;
}
