#include <assert.h>
#include <stdbool.h>

#define ROW 7
#define COL 24

bool search(const int a[ROW][COL], int size, int key) {
	for (const int *p = a[0]; p < a[0] + size; p++) {
		if (*p == key) {
			return true;
		}	
	}
	return false;
}

int main(void) {
	int temperatures[ROW][COL] = { [0][0] = 123, [6][11] = 32 };
	assert(search(temperatures, ROW * COL, 32));
}
