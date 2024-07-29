#define LEN 8

int evaluate_position(char board[LEN][LEN]) {
	int b_pieces_sum = 0, w_pieces_sum = 0;

	for (char *i = board[0]; i < board[0] + (LEN * LEN); i++) {
		switch(*i) {
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

	return b_pieces_sum - w_pieces_sum;
}

