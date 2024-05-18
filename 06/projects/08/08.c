#include <stdio.h>

int main(void) {
	int month, day, start = 1;

	printf("Enter number of days in month: ");
	scanf("%d", &month);

	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &day);
	
	for (int i = start; start <= month; i++) {
		if (i >= day) {
			printf("%3d", start);
			if (i % 7 == 0) {
				printf("\n");
			}
			start++;
		} else {
			printf("   ");
		} 
	}

	return 0;
}
