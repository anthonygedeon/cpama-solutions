#include <ctype.h>
#include <stdio.h>

int main(void) {
	printf("Enter a 12-hour time: ");
	
	int hh, mm;
	scanf("%d:%d", &hh, &mm);
	
	int c;
	while ((c = getchar()) != '\n') {
		if (toupper(c) == 'P' && getchar() == 'M') {
			if (hh != 12) {
				hh = hh + 12;
			}
		} else if (toupper(c) == 'A' && getchar() == 'M') {
			if (hh == 12) {
				hh = hh + 12;
			}
		}
	}
	
	printf("Equivalent 24-hour time: %d:%.2d", hh, mm);

	return 0;
}
