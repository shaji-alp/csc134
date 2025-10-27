#include <iostream>
#include <cstdlib>
#include <ctime>

/**
 * @brief Simple C++ Cup Guessing Game (Shell Game).
 * The user tries to guess which of the three cups hides the ball.
 * The game repeats until the user guesses correctly.
 */
int main() {
    // Seed the random number generator using the current time
    std::srand(std::time(0));

    // The ball is under cup 1, 2, or 3.
    // rand() % 3 gives 0, 1, or 2. Adding 1 makes it 1, 2, or 3.
    // *** The ball_cup is generated ONCE before the loop starts. ***
    const int ball_cup = (std::rand() % 3) + 1;
    int user_guess = 0;
    
    std::cout << "Welcome to the Simple Cup Game!\n";
    std::cout << "Try to guess which of the three cups (1, 2, or 3) holds the ball.\n";
    std::cout << "The game repeats until you guess correctly.\n\n";

    // Use a do-while loop to repeat the game logic
    do {
        std::cout << "Which cup (1, 2, or 3) holds the ball? Enter your guess: ";
        
        // Get the user's guess
        // We need to clear any potential previous bad input flags and ignore
        // the remaining input line before attempting a new read inside the loop.
        if (!(std::cin >> user_guess)) {
            // Handle fatal non-number input (e.g., EOF or first input)
            std::cerr << "Invalid input. Ending game.\n";
            return 1;
        }

        // Check if the guess is valid (between 1 and 3)
        if (user_guess < 1 || user_guess > 3) {
            std::cout << "\n🚫 That's not one of the cups! Please guess 1, 2, or 3.\n\n";
        } else {
            // Reveal the result
            if (user_guess == ball_cup) {
                std::cout << "\n🎉 Congratulations! You guessed correctly! The ball was under cup " << ball_cup << ".\n";
            } else {
                std::cout << "\nUnlucky! The ball is NOT under cup " << user_guess << ". Try again!\n\n";
            }
        }
    // The loop continues AS LONG AS the user's guess is NOT equal to the ball_cup
    // OR if the guess was invalid (outside 1-3)
    } while (user_guess != ball_cup);

    return 0;
}