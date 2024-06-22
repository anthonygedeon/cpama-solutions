#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define NORTH 0
#define SOUTH 1
#define WEST  2
#define EAST  3

void generate_random_walk(char walk[10][10]) {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			walk[i][j] = '.';
		}
	}
}

void print_array(char walk[10][10]) {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%c ", walk[i][j]);
		}
		printf("\n");
	}
}

int main(void) {
	char letter = 'A';
	char board[10][10];

	bool walk = true;

	generate_random_walk(board);

	srand((unsigned int) time(NULL));

	int x = 0, y = 0;
	while (walk) {

		// check neighbors
		if ((board[x - 1][y] != '.' && board[x + 1][y] != '.') && 
				(board[x][y + 1] != '.' && board[x][y - 1] != '.'))  {
				board[x][y] = letter;
				break;
		}

		switch(rand() % 4) {
			case NORTH:
				if (board[x][y + 1] == '.' && (y + 1) < 10)
						board[x][y++] = letter++;
				break;
			case SOUTH:
				if (board[x][y - 1] == '.' && (y - 1) >= 0)
						board[x][y--] = letter++;
				break;
			case EAST:
				if (board[x + 1][y] == '.' && (x + 1) < 10)
						board[x++][y] = letter++;
				break;
			case WEST:
				if (board[x - 1][y] == '.' && (x - 1) >= 0)
						board[x--][y] = letter++;
				break;
		}

		if (letter > 'Z') walk = false;
	}

	print_array(board);

	return 0;
}
