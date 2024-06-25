#include <stdio.h>

void create_magic_square(int n, char magic_square[n][n]) {
	int i = 0; 
	int j = n / 2; 
	int magic_number = 1;
	magic_square[i][j] = magic_number;
	while (magic_number != (n * n)) {
		magic_number++;
		i = (i - 1) < 0 ? n - 1 : i - 1;
		j = (j + 1) >= n ? 0 : j + 1;     

		if (magic_square[i][j] == 0) {
			magic_square[i][j] = magic_number;
		} else {
			i += 2;
			j--;
			if (i > (n - 1)) i = 1;
			if (j < 0) j = n - 1;
			magic_square[i][j] = magic_number;
		}
	}
}

void print_magic_square(int n, char magic_square[n][n]) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%-4d", magic_square[i][j]);
		}
		printf("\n");
	}
}

// TODO: bug when bigger numbers are introduced i.e 7 or 99
int main(void) {
	printf("Enter size of magic square (1-99): ");

	int n;
	scanf("%d", &n);
	char magic_square[n][n];

	create_magic_square(n, magic_square);
	
	print_magic_square(n, magic_square);
	
	return 0;
}

