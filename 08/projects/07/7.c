#include <stdio.h>

int main(void) {
	int a[5][5];

	for (int i = 1; i <= 5; i++) {
		printf("Enter row %d: ", i);
		scanf("%d %d %d %d %d", a[i - 1], (1 + a[i - 1]),
				 (2 + a[i - 1]), (3 + a[i - 1]), (4 + a[i - 1]));
	}
	printf("\n");
	
	printf("Row totals: ");
	for (int i = 0; i < 5; i++) {
		int row_sum = 0;
		for (int j = 0; j < 5; j++) {
			row_sum += a[i][j];
		}
		printf("%d ", row_sum);
	}
	printf("\n");

	printf("Columns totals: ");
	for (int i = 0; i < 5; i++) {
		int col_sum = 0;
		for (int j = 0; j < 5; j++) {
			col_sum += a[j][i];
		}
		printf("%d ", col_sum);
	}
	printf("\n");

	return 0;
}
