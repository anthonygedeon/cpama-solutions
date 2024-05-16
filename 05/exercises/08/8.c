#include <stdbool.h>
#include <stdio.h>

int main(void) {
	int age = 35;	
	
	bool teenager = age >= 13 && age <= 19;

	printf("Teenager: %d", teenager);
	return 0;
}
