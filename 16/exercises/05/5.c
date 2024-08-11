struct date {
	int month, day, year;
};

int is_leap_year(int year) {
	if (year % 100 == 0) {
		if (year % 400 != 0) {
			return 1;
		}
	}
	return 0;
}

int day_of_year(struct date d) {
	int total_days = 0;

	if (d.month == 0) return d.day;

	for (int i = 0; i < d.month - 1; i++) {
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
						total_days = total_days + (is_leap_year(d.year) ? 28 : 29);
						break;
			}
	}

        return total_days + d.day;
}

int compare_dates(struct date d1, struct date d2) {
	int day1 = day_of_year(d1);
	int day2 = day_of_year(d2);
	if (day1 > day2) {
		return -1;
	} else if (day1 < day2) {
		return 1;
	}
	return 0;
}
