#include <ctype.h>
#include <stdio.h>

// TODO
void remove_filename(char *url) {
}

int main(void) {
	char url[] = "http://www.knking.com/index.html";
	remove_filename(url);
	printf("%s\n", url);
	return 0;
}
