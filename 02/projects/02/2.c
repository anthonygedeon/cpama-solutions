#include <stdio.h>

#define PI 3.14

int main(void) {
	int r = 10;
	printf("Sphere volume: %.2f cubic meters\n", (4.0f / 3.0f) * PI * (r * r * r));
	return 0;
}
