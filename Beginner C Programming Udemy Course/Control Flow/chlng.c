#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randNum;
    time_t t;

    srand((unsigned) time(&t));
    randNum = rand() % 21;

    printf("Guess the number between 0 and 20\n");

    for (int guesses = 5; guesses > 0; guesses--) {
        int guessNum = 0;

        printf("You have %d guesses left\nEnter a guess: ", guesses);
        scanf("%d", &guessNum);

        while (guesses < 0 || guesses > 20) {
            printf("Please enter again: \n");
            scanf("%d", &guessNum);
        }

        if (guessNum < randNum) {
            printf("My number is greater than that, please try again\n");
        }
        else if (guessNum == randNum) {
            printf("You guessed it!\n");
            break;
        }
        else if (guessNum > randNum) {
            printf("My number is lesser than that, please try again\n");
        }
    }

    return 0;
}