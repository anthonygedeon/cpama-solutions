#include <string.h>
#include <stdio.h>

void get_extension(const char *file_name, char *extension) {
	while (*file_name) {
		if (*file_name == '.') {
			strcpy(extension, file_name + 1);
			return;
		}
		file_name++;
	}
	strcpy(extension, "");
}

int main(void) {
	char ext[3 + 1];
	get_extension("memo.txt", ext);
	// get_extension("memo", ext);
	printf("%s\n", ext);
	return 0;
}
