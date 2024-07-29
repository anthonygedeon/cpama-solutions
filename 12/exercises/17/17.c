#include <stdio.h>
#define LEN 10

int sum_two_dimensional_array(const int a[][LEN], int n) {
	int sum = 0;
    for (const int *i = a[0]; i < a[0] + n; i++) 
		sum += *i;

    return sum;

}

int main(void) {
	int a[][LEN] = {
		{1,2,3,4,5,6,7,8,9},
		{1,2,3,4,5,6,7,8,9},
		{1,2,3,4,5,6,7,8,9},
		{1,2,3,4,5,6,7,8,9},
		{1,2,3,4,5,6,7,8,9},
		{1,2,3,4,5,6,7,8,9},
		{1,2,3,4,5,6,7,8,9},
		{1,2,3,4,5,6,7,8,9},
		{1,2,3,4,5,6,7,8,9},
	};

	printf("%d\n", sum_two_dimensional_array(a, 9 * LEN));
	return 0;
}
