#include <stdio.h>

// TODO
int main(void) {
	int mm = 0, dd = 0, yy = 0;
	int min_mm = 0, min_dd = 0, min_yy = 0;
	
	while ((mm + dd + yy) != 0) {
		printf("Enter a date (mm/dd/yy): ");
		scanf("%d/%d/%d", &mm, &dd, &yy);
	}

	printf("%d/%d/%d is the earliest date\n", min_mm, min_dd, min_yy);

	return 0;
}
