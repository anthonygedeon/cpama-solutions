#include <stdio.h>

// TODO: Reduce to 4 if-statements
int main(void) {
	int i1, i2, i3, i4;
	int largest, smallest = 0;	

	printf("Enter four integers: ");
	scanf("%d%d%d%d", &i1, &i2, &i3, &i4);

	if (i1 > i2 && i1 > i3 && i1 > i4) largest = i1;
	if (i2 > i1 && i2 > i3 && i2 > i4) largest = i2;
	if (i3 > i1 && i3 > i2 && i3 > i4) largest = i3;
	if (i4 > i1 && i4 > i2 && i4 > i3) largest = i4;

	if (i1 < i2 && i1 < i3 && i1 < i4) smallest = i1;
	if (i2 < i1 && i2 < i3 && i2 < i4) smallest = i2;
	if (i3 < i1 && i3 < i2 && i3 < i4) smallest = i3;
	if (i4 < i1 && i4 < i2 && i4 < i3) smallest = i4;

	printf("Largest: %d\n", largest);
	printf("Smallest: %d\n", smallest);

	return 0;
}
