#include <ctype.h>
#include <stdio.h>

// TODO
int main(void) {
	char* first, *last;

	printf("Enter a first and last name: ");
	scanf("%s %s", first, last);

	printf("%s, %c", first, toupper(last[0]));
	return 0;
}
