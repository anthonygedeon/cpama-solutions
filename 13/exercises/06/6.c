#include <ctype.h>
#include <stdio.h>

void censor(char *s) {
	int i = 0;
	while (*s) {
		if (tolower(*s) == 'f' 
			&& tolower(*(s + 1)) == 'o' 
			&& tolower(*(s + 2)) == 'o') {
			*s = 'x';
			*(s + 1) = 'x';
			*(s + 2) = 'x';
		}
		s++;
	}
}

int main(void) {
	char s[] = "food fool";
	censor(s);
	printf("%s\n", s);
	return 0;	
}
