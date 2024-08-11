#include <stdio.h>

struct time {
	int hours;
	int minutes;
	int seconds;
};

struct time split_time(long total_seconds) {
	return (struct time){ 
		.hours   = (total_seconds / 3600) % 23, 
		.minutes = (total_seconds / 60) % 60, 
		.seconds = total_seconds % 60,
	};
}

int main(void) {
	struct time t = split_time(832989238);
	printf("%.2d:%.2d:%.2d", t.hours, t.minutes, t.seconds);
	return 0;
}
