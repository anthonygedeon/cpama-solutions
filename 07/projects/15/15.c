#include <stdio.h>

int main(void) {
	long double n, factorial = 1;

	printf("Enter a positive integer: ");
	scanf("%Lf", &n);
	
	for (int i = 1; i <= n; i++) {
		factorial *= i;
	}

	printf("Factorial of %Lf: %Lf", n, factorial);

	// short		-> 7
	// int		 	-> 10
	// long		 	-> 20
	// long long 	-> 20
	// float	 	-> 13
	// double	 	-> 13
	// long double	-> 25

	return 0;
}
