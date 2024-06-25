#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll_dice(void) {

}

bool play_game(void) {

}

// TODO: make the code better
int main(void) {
	srand((unsigned int) time(NULL));

	int point = 0;
	char response;
	bool play_again = true;
	bool is_first_round = true;
	
	while (play_again) {
		int dice_a = (rand() % 6) + 1;
		int dice_b = (rand() % 6) + 1;
		int sum = dice_a + dice_b;

		if (is_first_round) {
			printf("You rolled: %d\n", sum);

			point = sum;
			printf("Your point is: %d\n", point);
			is_first_round = false;

			dice_a = (rand() % 6) + 1;
			dice_b = (rand() % 6) + 1;
			sum = dice_a + dice_b;
			
			switch(sum) {
				case 2: case 3: case 12:
					printf("You lose!\n");
					play_again = true;
					break;
				case 7: case 11:
					printf("You Win!\n");
					play_again = true;
					break;
			}
			
			printf("Play again? ");
			scanf("%c", &response);
			printf("\n");

			if (tolower(response) == 'y') {
				play_again = true;
			} else if (tolower(response) == 'n') {
				play_again = false;
			}
		}
		
		switch(sum) {
			case 2: case 3: case 12:
				printf("You lose!\n");
				play_again = true;
				break;
			case 11:
				printf("You win!\n");
				play_again = true;
				break;
		}

		printf("You rolled: %d\n", sum);

		if (point == sum) {
			printf("You win!");
			break;
		} else if (sum == 7) {
			printf("You lose!");
			break;
		}

		printf("Play again? ");
		scanf("%c", &response);
		printf("\n");

		if (tolower(response) == 'y') {
			play_again = true;
		} else if (tolower(response) == 'n') {
			play_again = false;
		}
	}
	
	return 0;
}
