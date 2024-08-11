#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIE_SIDES_MAX 6

typedef enum {
	WON = 0, LOST = 1
} points; // not in chapter 9 but makes the code a bit nicer to work with

void init_rng(void);
void update_score(int scores[], points side);
void prompt_winner(void);
void prompt_loser(void);
void prompt_retry(char command);
void prompt_score(int score[]);
void first_round(void);
bool play_game(void);
int roll_dice(void);

void init_rng(void) {
	srand((unsigned int) time(NULL));
}

void update_score(int scores[], points side) {
	scores[side]++;
}

void prompt_winner(void) {
	printf("You win!\n");
}

void prompt_loser(void) {
	printf("You lose!\n");
}

void prompt_retry(char command) {
	printf("Play again? (Y/N): ");
	scanf("%c", &command);
	printf("\n");
}

void prompt_score(int score[]) {
	printf("Wins: %d  Losses: %d", score[WON], score[LOST]);
}

int roll_dice(void) {
	int die_a = (rand() % DIE_SIDES_MAX) + 1;
	int die_b = (rand() % DIE_SIDES_MAX) + 1;
	return die_a + die_b;
}

bool play_game(void) {
	int point = 0;

	while(true) {
		int sum = roll_dice();

		switch(sum) {
			case 2: case 3: case 12:
				printf("You lose!\n");
				break;
			case 11:
				printf("You win!\n");
				break;
		}

		if (point == sum) {
			printf("You win!\n");
			break;
		} else if (sum == 7) {
			printf("You lose!\n");
			break;
		}

		printf("You rolled: %d\n", sum);
		point = sum;
		printf("Your point: %d\n", point);
	}
	
	return false;
}

// TODO: make the code better
int main(void) {
	init_rng();

	bool is_first_roll = false;
	
	int score[2] = { 0, 0 };

	char command;
	do {
		int first_roll = roll_dice();
		printf("You rolled: %d\n", first_roll);
		switch(first_roll) {
			case 2: case 3: case 12:
				printf("You lose!\n");
				update_score(score, LOST);
				is_first_roll = true;
				break;
			case 7: case 11:
				printf("You win!\n");
				update_score(score, WON);
				is_first_roll = true;
				break;
		}
		if (!is_first_roll) {
			play_game();
		}

		prompt_retry(command);

	} while(tolower(command) == 'y');

	prompt_score(score);

	return 0;
}
