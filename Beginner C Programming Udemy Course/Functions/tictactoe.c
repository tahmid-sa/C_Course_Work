#include <stdio.h>
#include <cstdbool>

int getPlace(bool player1Turn);
void displayBoard(char board[9]);
void checkEndGame(char board[9]);

//bool player1Turn;

int getPlace(bool player1Turn) {
	int place = 0;

	if (player1Turn == true) {
		printf("Player 1, enter the place number : ");
	}
	else if (player1Turn == false) {
		printf("Player 2, enter the place number : ");
	}

	scanf("%d", &place);

	return place;
}


void displayBoard(char board[9]) {
	for (int place = 0; place < 9; place++) {
		printf("%c  ", board[place]);

		if (place == 2 || place == 5 || place == 8) {
			printf("\n");
		}
	}
}

void checkEndGame(char board[9]) {
	if (board[0] != '1' && board[1] != '2' && board[2] != '3' && board[3] != '4' && board[4] != '5' && board[5] != '6' && board[6] != '7' && board[7] != '8' && board[8] != '9') {
		printf("End game\n");
	}
}

int main() {
	char board[9] = { '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	bool playerWins = false, player1Turn = true;

	while (playerWins == false) {
		int place = getPlace(player1Turn);
		char symbol;

		if (player1Turn == true) {
			symbol = 'X';
		}
		else if (player1Turn == false) {
			symbol = 'O';
		}

		if (place == 0) {
			board[0] = symbol;
		}
		else if (place == 1) {
			board[1] = symbol;
		}
		else if (place == 2) {
			board[2] = symbol;
		}
		else if (place == 3) {
			board[3] = symbol;
		}
		else if (place == 4) {
			board[4] = symbol;
		}
		else if (place == 5) {
			board[5] = symbol;
		}
		else if (place == 6) {
			board[6] = symbol;
		}
		else if (place == 7) {
			board[7] = symbol;
		}
		else if (place == 8) {
			board[8] = symbol;
		}

		displayBoard(board);

        // Check to see if game is won
		if ((board[0] == 'X' && board[1] == 'X' && board[2] == 'X') || (board[0] == 'O' && board[1] == 'O' && board[2] == 'O')) {
			printf("Player wins");
			break;
		}
		else if ((board[3] == 'X' && board[4] == 'X' && board[5] == 'X') || (board[3] == 'O' && board[4] == 'O' && board[5] == 'O')) {
			printf("Player wins");
			break;
		}
		else if ((board[6] == 'X' && board[7] == 'X' && board[8] == 'X') || (board[6] == 'O' && board[7] == 'O' && board[8] == 'O')) {
			printf("Player wins");
			break;
		}
		else if ((board[0] == 'X' && board[3] == 'X' && board[6] == 'X') || (board[0] == 'O' && board[3] == 'O' && board[6] == 'O')) {
			printf("Player wins");
			break;
		}
		else if ((board[1] == 'X' && board[4] == 'X' && board[7] == 'X') || (board[1] == 'O' && board[4] == 'O' && board[7] == 'O')) {
			printf("Player wins");
			break;
		}
		else if ((board[2] == 'X' && board[5] == 'X' && board[8] == 'X') || (board[2] == 'O' && board[5] == 'O' && board[8] == 'O')) {
			printf("Player wins");
			break;
		}
		else if ((board[0] == 'X' && board[4] == 'X' && board[8] == 'X') || (board[0] == 'O' && board[4] == 'O' && board[8] == 'O')) {
			printf("Player wins");
			break;
		}
		else if ((board[6] == 'X' && board[4] == 'X' && board[2] == 'X') || (board[6] == 'O' && board[4] == 'O' && board[2] == 'O')) {
			printf("Player wins");
			break;
		}

		checkEndGame(board);

        if (player1Turn == true) {
            player1Turn = false;
        }
        else {
            player1Turn = true;
        }
	}


	return 0;
}