#include <stdio.h>

// this could be wrong, I didn't check the logic
int is_leap_year(int year) {
	if (year % 100 == 0) {
		if (year % 400 != 0) {
			return 1;
		}
	} 
	return 0;
}

int day_of_year(int month, int day, int year) {
	int total_days = 0;

	if (month == 0) return day;

	for (int i = 0; i < month - 1; i++) {
		switch(i) {
			case 0:
			case 2:
			case 5:
			case 8:
			case 10:
			case 12:
				total_days += 31;
				break;
			
			case 3:
			case 4:
			case 6:
			case 9:
			case 11:
				total_days += 30;
				break;

			case 1: 
				total_days = total_days + (is_leap_year(year) ? 28 : 29);
				break;
		}
	}

	return total_days + day;
}

int main(void) {
	printf("%d\n", day_of_year(6, 12, 2024));
	return 0;
}
