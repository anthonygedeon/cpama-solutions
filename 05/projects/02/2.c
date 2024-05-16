#include <stdio.h>

int main(void) {
	int m_hh, m_mm = 0;
	
	printf("Enter a 24-hour time: ");
	scanf("%2d:%2d", &m_hh, &m_mm);

	if (m_mm > 59) {
		m_hh += 1;
		m_mm = 0;
	}
	
	int hh = m_hh;
	if (m_hh > 12) {
		hh -= 12;
	} else if (m_hh == 12) {
		hh = 1;
	}

	printf("Equivalent 12-hour time: %d:%.2d %s", 
		hh, 
		m_mm, 
		m_hh >= 12 ? "PM" : "AM"
	);

	return 0;
}
