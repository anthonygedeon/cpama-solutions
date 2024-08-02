#include <ctype.h>
#include <stdio.h>

void capitalize(char *s, int n) {
	while (*s) {
		if (isalpha(*s))
			*s = toupper(*s);
		s++;
	}
}

int main(void) {
	char s[] = "anthony";
	capitalize(s, 7);
	printf("%s\n", s);
	return 0;
}
