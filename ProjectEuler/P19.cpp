#define TUESDAY 5

int p19() {

	int daysOfMonth[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int monthsStartingOnMonday = 0;

	for (int year = 1901, days = 0; year <= 2000; year++) {

		for (int i = 1; i <= 12; i++) {
			days += daysOfMonth[i];
			if (year % 4 == 0 && i == 2) {
				days++; //leap day!
				if (year % 100 == 0 && year % 400 != 0) days--;
			}
			int dayOfWeek = days % 7;
			if (days % 7 == TUESDAY) {
				monthsStartingOnMonday++;
			}
		}
	}

	return monthsStartingOnMonday;

}