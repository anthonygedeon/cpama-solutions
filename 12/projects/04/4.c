#include <stdbool.h>

bool is_palindrome_v2(char *str, int len) {
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
