#include <stdio.h>


int evaluate_position(char board[8][8]) {
	int b_pieces_sum = 0;
	int w_pieces_sum = 0;

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			switch(board[i][j]) {
				case 'Q':
					w_pieces_sum += 9;
				case 'R':
					w_pieces_sum += 5;
				case 'B':
					w_pieces_sum += 3;
				case 'N':
					w_pieces_sum += 3;
				case 'P':
					w_pieces_sum += 1;

				case 'q':
					b_pieces_sum += 9;
				case 'r':
					b_pieces_sum += 5;
				case 'b':
					b_pieces_sum += 3;
				case 'n':
					b_pieces_sum += 3;
				case 'p':
					b_pieces_sum += 1;
			}
		}
	}

	return b_pieces_sum - w_pieces_sum;
}

int main(void) {
	static char board[8][8] = {
		{ 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'  },
		{ 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'  },
		{ ' ',  ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
		{ ' ',  ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
		{ ' ',  ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
		{ ' ',  ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
		{ 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'  },
		{ 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'  },
	};

	printf("%d\n", evaluate_position(board));
	return 0;
}
