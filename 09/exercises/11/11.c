#include <stdio.h>

float compute_GPA(char grades[], int n) {
	float gpa = 0.0;
	for (int i = 0; i < n; i++) {
		switch(grades[i]) {
			case 'A':
				gpa += 4.0;
				break;
			case 'B':  
				gpa += 3.0;
				break;
			case 'C':
				gpa += 2.0;
				break;
			case 'D':
				gpa += 1.0;
				break;
			case 'F':
				break;
		}
	}

	return gpa / n;
}

int main(void) {
	printf("%f\n", compute_GPA((char[]){ 'A', 'C', 'B', 'F' }, 4));
	return 0;
}
