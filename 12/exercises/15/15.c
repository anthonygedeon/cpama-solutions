#include <stdio.h>
#include <stdbool.h>

#define ROW 7
#define COL 24

void print_readings(int a[ROW][COL], int row) {
	for (int *p = a[row]; p < a[row] + COL; p++) {
		printf("%d ", *p);
	}
}

int main(void) {
	int temperatures[ROW][COL] = { [0][0] = 123, [6][11] = 32 };
	print_readings(temperatures, 6);
}
