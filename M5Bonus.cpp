#include <iostream>
#include <cstdlib>
#include <ctime>

/**
 * @brief Simple C++ Cup Guessing Game (Shell Game).
 * * The user tries to guess which of the three cups hides the ball.
 */
int main() {
    // Seed the random number generator using the current time
    // to ensure a different result each time.
    std::srand(std::time(0));

    // The ball is under cup 1, 2, or 3.
    // rand() % 3 gives 0, 1, or 2. Adding 1 makes it 1, 2, or 3.
    const int ball_cup = (std::rand() % 3) + 1;
    int user_guess = 0;

    std::cout << "Welcome to the Simple Cup Game!\n";
    std::cout << "Which cup (1, 2, or 3) holds the ball? Enter your guess: ";
    
    // Get the user's guess
    if (!(std::cin >> user_guess)) {
        std::cerr << "Invalid input. Please run again and enter a number.\n";
        return 1;
    }

    // Check if the guess is valid (between 1 and 3)
    if (user_guess < 1 || user_guess > 3) {
        std::cout << "That's not one of the cups! The cups are numbered 1, 2, and 3.\n";
    } else {
        // Reveal the result
        if (user_guess == ball_cup) {
            std::cout << "\n🎉 Congratulations! You guessed correctly.\n";
        } else {
            std::cout << "\nUnlucky! The ball was actually under cup " << ball_cup << ".\n";
        }
    }

    return 0;
}
