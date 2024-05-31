#include <stdio.h>

#define MAX 100

int main(void) {
	char message[MAX];
	printf("Enter message to be encrypted: ");

	int c, i;
	while ((c = getchar()) != '\n') {
		message[i++] = c;
	}
	
	printf("Enter shift amount (1-25): ");
	int key = 0;
	scanf("%d", &key);

	printf("Encrypted message: ");
	for (int i = 0; i < MAX; i++) {
		char encrypted = message[i];

		if (encrypted >= 'A' && encrypted <= 'Z') {
			encrypted = ((encrypted % 'A') + key) % 26 + 'A';
		}

		if (encrypted >= 'a' && encrypted <= 'z') {
			encrypted = ((encrypted % 'a') + key) % 26 + 'a';
		}

		printf("%c", encrypted);
	}

	return 0;
}
