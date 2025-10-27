#include <iostream>
#include <cstdlib>
#include <ctime>

// Use the std namespace for cleaner code (e.g., just 'cout' instead of 'std::cout')
using namespace std;

/**
 * @brief Simple C++ Cup Guessing Game (Shell Game).
 * The ball is reshuffled (new random position) every time the user guesses.
 * The game runs indefinitely until the user guesses correctly or enters '0' to quit.
 */
int main() {
    // Seed the random number generator using the current time
    srand(time(0));

    int user_guess = 0;
    
    cout << "Welcome to the Simple Cup Game!\n";
    cout << "A new ball position is randomly set before every guess (cups are reshuffled).\n";
    cout << "Enter '0' at any time to quit the game.\n";
    
    // Use an infinite loop to keep the game running until explicitly broken
    while (true) {
        
        // *** MOVED INSIDE THE LOOP: The ball_cup is generated/reshuffled every iteration. ***
        // rand() % 3 gives 0, 1, or 2. Adding 1 makes it 1, 2, or 3.
        const int ball_cup = (rand() % 3) + 1;
        
        cout << "\nWhich cup (1, 2, or 3) holds the ball? Enter your guess: ";
        
        // Get the user's guess
        if (!(cin >> user_guess)) {
            cerr << "Invalid input. Ending game.\n";
            break; // Exit the loop on non-numeric input error
        }
        
        // 1. Check for the exit command
        if (user_guess == 0) {
            cout << "\n👋 Thanks for playing! Goodbye.\n";
            break; // Exit the loop and end the game
        }

        // 2. Check if the guess is valid (between 1 and 3)
        if (user_guess < 1 || user_guess > 3) {
            cout << "🚫 That's not one of the cups! Please guess 1, 2, or 3.\n";
            // Loop continues to the next iteration (reshuffling the ball again)
        } else {
            // 3. Reveal the result
            if (user_guess == ball_cup) {
                cout << "\n🎉 Congratulations! You guessed correctly.\n";
                // The game ends after a correct guess
                break; 
            } else {
                cout << "\nUnlucky! The ball was actually under cup " << ball_cup << " this time. Try again!\n";
                // Loop continues to the next iteration (reshuffling the ball again)
            }
        }
    }

    return 0;
}