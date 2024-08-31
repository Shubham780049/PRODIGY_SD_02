#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber, guess, attempts = 0;

    // Initialize random number generator
    srand(time(0));
    randomNumber = rand() % 100 + 1;  // Generates a random number between 1 and 100

    printf("Welcome to the Guessing Game!\n");
    printf("I have chosen a number between 1 and 100. Can you guess it?\n");

    // Loop until the user guesses the correct number
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > randomNumber) {
            printf("Too high! Try again.\n");
        } else if (guess < randomNumber) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
        }
    } while (guess != randomNumber);

    return 0;
}
