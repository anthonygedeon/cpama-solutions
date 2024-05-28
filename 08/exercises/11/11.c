int main(void) {
	char chess_board[8][8];
	
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			chess_board[i][j] = (i + j) % 2 == 0 ? 'B' : 'R';
		}
	}

	return 0;
}
