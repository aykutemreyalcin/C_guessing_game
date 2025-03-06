#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void guessing_game(difficulity) {
    int number, guess, attempts = 0;
    
    if (difficulity == 3)
    {
        srand(time(0));
        number = rand() % 100 + 1; // Generates a random number between 1 and 100
        printf("Welcome to the Guessing Game!\n");
        printf("Try to guess the number between 1 and 100.\n");
        do {
            printf("Enter your guess: ");
            scanf("%d", &guess);
            attempts++;
        
            if (guess > number) {
                printf("Too high! Try again.\n");
            } else if (guess < number) {
                printf("Too low! Try again.\n");
            } else {
                printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
            }
        } while (guess != number);
    }
    else if (difficulity == 2)
    {
        srand(time(0));
        number = rand() % 50 + 1;
        printf("Welcome to the Guessing Game!\n");
        printf("Try to guess the number between 1 and 50.\n");
        do {
            printf("Enter your guess: ");
            scanf("%d", &guess);
            attempts++;
        
            if (guess > number) {
                printf("Too high! Try again.\n");
            } else if (guess < number) {
                printf("Too low! Try again.\n");
            } else {
                printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
            }
        } while (guess != number);
    }
    else
    {
        srand(time(0));
        number = rand() % 10 + 1;
        printf("Welcome to the Guessing Game!\n");
        printf("Try to guess the number between 1 and 10.\n");
        do {
            printf("Enter your guess: ");
            scanf("%d", &guess);
            attempts++;
        
            if (guess > number) {
                printf("Too high! Try again.\n");
            } else if (guess < number) {
                printf("Too low! Try again.\n");
            } else {
                printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
            }
        } while (guess != number);
    }
}

int main() {
    while (1)
        {
        printf("what difficulity do you want\n1 --> 1-10\n2 --> 1-50\n3 --> 1-100\n");
        int difficulity;
        scanf("%d", &difficulity);
        if (difficulity < 1)
        {
            printf("enter a valid option");
            break;
        }
        guessing_game(difficulity);
        return 0;
    }
}
