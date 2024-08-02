#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

bool test_extension(const char *file_name, const char *extension) {
	while (*file_name++ != '.')
		;
	
	while (*file_name) {
		if (toupper(*file_name++) != *extension++) {
			return false;
		}
	}

	return true;
}

int main(void) {
	bool ext_test = test_extension("memo.html", "HTML");
	printf("%d\n", ext_test);
	return 0;
}
