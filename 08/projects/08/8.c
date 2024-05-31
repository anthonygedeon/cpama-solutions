#include <stdio.h>

int main(void) {
	int a[5][5];

	for (int i = 1; i <= 5; i++) {
		printf("Enter quiz grades for student %d: ", i);
		scanf("%d %d %d %d %d", a[i - 1], (1 + a[i - 1]),
				 (2 + a[i - 1]), (3 + a[i - 1]), (4 + a[i - 1]));
	}
	printf("\n");
	
	int total = 0;
	for (int i = 0; i < 5; i++) {
		printf("Total and average score for student %d: ", i + 1);
		for (int j = 0; j < 5; j++) {
			total += a[i][j];
		}
		printf("%4d		%.2f\n", total, (float)total / 5.0);
		total = 0;
	}
	printf("\n");
	
	float avg = 0.0, high = 0.0, low = 0.0;
	for (int i = 0; i < 5; i++) {
		printf("Average, high and low scores for quiz %d: ", i + 1);

		for (int j = 0; j < 5; j++) {
			low = a[j][0];

			if (high < a[j][i]) {
				high = a[j][i];
			}

			if (low > a[j][i]) {
				low = a[j][i];
			}

			avg += a[j][i];
		}

		printf("%.2f	%.2f	%.2f\n", avg / 5, high, low);
		avg = 0.0, high = 0.0, low = 0.0;
	}

	return 0;
}
