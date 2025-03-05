# Simple Guessing Game in C

## Overview
This C program is a simple number guessing game. The computer randomly selects a number between 1 and 100, and the player must guess the number with hints provided.

## How It Works
1. The program generates a random number between 1 and 100.
2. The player enters a guess.
3. The program provides feedback:
   - If the guess is too high, it prompts the player to guess lower.
   - If the guess is too low, it prompts the player to guess higher.
4. The game continues until the correct number is guessed.
5. The total number of attempts is displayed at the end.

### Requirements
- A C compiler (e.g., GCC, Clang, MSVC)

### Compiling the Program
```sh
gcc guessing_game.c -o guessing_game
```

### Running the Game
```sh
./guessing_game
```

### Expected Output
```
Welcome to the Guessing Game!
Try to guess the number between 1 and 100.
Enter your guess: 50
Too high! Try again.
Enter your guess: 25
Too low! Try again.
Enter your guess: 37
Congratulations! You guessed the number in 3 attempts.
```
