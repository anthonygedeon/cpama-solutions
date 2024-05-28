#include <stdio.h>

#define HOURS 24
#define DAYS 30

int main(void) {
	const int temperature_readings[DAYS][HOURS]; 
	
	int sum = 0;
	for (int i = 0; i < DAYS; i++) {
		for (int j = 0; j < HOURS; j++) {
			sum += temperature_readings[i][j];
		}
	}

	printf("Average temperature for the month: %.2f", sum / (float)(HOURS * DAYS));

	return 0;
}
