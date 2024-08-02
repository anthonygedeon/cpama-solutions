#include <ctype.h>
#include <stdio.h>

int read_line(char str[], int n) {
	int ch, i = 0;
	
	// (a)

	while ((ch = getchar()) != '\n') { 
		while ((ch = getchar()) != ' ')
			;
		if (i < n) {
			str[i++] = ch;
		}
	}
	str [i] = '\0';
	printf("%s", str);
	return i;
}

int main(void) {
	char s[10];
	read_line(s, 10);
	printf("%s\n", s);
	return 0;
}
