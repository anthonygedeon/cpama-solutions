#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>

bool is_palindrome_v1(char str[], int len) {
	int low = 0;
	int high = len - 1;
	bool ip = true;
	while (low < high) {
		if (str[low++] == str[high--])	{
			ip = true;
		} else {
			ip = false;
		}
	}
	return ip;
}

bool is_palindrome_v2(char str[], int len) {
	int low = 0;
	int high = len - 1;
	bool ip = true;
	while (low < high) {
		if (*(str + low++) == *(str + high--)) {
			ip = true;
		} else {
			ip = false;
		}
	}
	return ip;
}


int main(void) {
	char msg[100];
	
	printf("Enter a message: ");
	int c, len = 0;
	while ((c = getchar()) != '\n') {
		if (isalpha(c)) {
			msg[len++] = tolower(c);
		}
	}

	if (is_palindrome_v2(msg, len)) {
		printf("Palindrome");
	} else {
		printf("Not a Palindrome");
	}

	return 0;
}
