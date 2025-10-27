#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string> // Need string for clearer formatting

using namespace std;

// --- Multi-Line ASCII Cup Definitions ---
// The content inside the cup is 3 lines high.
const string CUP_TOP    = "  _______  ";
const string CUP_EMPTY  = " |       | "; // Empty inside
const string CUP_BALL   = " |   •   | "; // Ball inside
const string CUP_BOTTOM = " |_______| ";
const string CUP_NUMBER = "    [%d]    "; // Placeholder for cup number

// Function to print the cups with the hidden ball revealed (for game over or visual reveal)
void display_cups_revealed(int ball_cup) {
    
    // An array of strings to hold the cup numbers (1, 2, 3) aligned under the cups
    string numbers[3];
    // Use snprintf or similar logic to format the numbers string if needed, 
    // but we can just hardcode for simplicity here.
    numbers[0] = "    [1]    ";
    numbers[1] = "    [2]    ";
    numbers[2] = "    [3]    ";

    cout << "\n--- R E V E A L ---\n";
    
    // Line 1: Top of the cups
    cout << CUP_TOP << CUP_TOP << CUP_TOP << endl;
    
    // Line 2, 3, 4: Middle of the cups (where the ball is)
    for (int line = 1; line <= 3; ++line) {
        for (int cup = 1; cup <= 3; ++cup) {
            // Only draw the ball on the second line (line == 2) for visual centering
            if (cup == ball_cup && line == 2) {
                cout << CUP_BALL;
            } else {
                cout << CUP_EMPTY;
            }
        }
        cout << endl;
    }

    // Line 5: Bottom of the cups
    cout << CUP_BOTTOM << CUP_BOTTOM << CUP_BOTTOM << endl;
    
    // Line 6: Cup numbers
    cout << numbers[0] << numbers[1] << numbers[2] << endl;
    
    cout << "-------------------------------------\n";
}

// Function to display the cups *before* the guess (all hiding the ball)
void display_cups_hidden() {
    cout << "\n-------------------------------------\n";
    
    // Line 1: Top of the cups
    cout << CUP_TOP << CUP_TOP << CUP_TOP << endl;
    
    // Line 2, 3, 4: Middle of the cups (all empty, hiding the ball)
    for (int line = 1; line <= 3; ++line) {
        cout << CUP_EMPTY << CUP_EMPTY << CUP_EMPTY << endl;
    }

    // Line 5: Bottom of the cups
    cout << CUP_BOTTOM << CUP_BOTTOM << CUP_BOTTOM << endl;
    
    // Line 6: Cup numbers
    cout << "    [1]        [2]        [3]    " << endl;
}


/**
 * @brief Simple C++ Cup Guessing Game (Shell Game) with multi-line visual symbols.
 * The ball is reshuffled every time the user guesses.
 */
int main() {
    // Seed the random number generator
    srand(time(0));

    int user_guess = 0;
    
    cout << "Welcome to the Multi-Line Cup Game! 🏆\n";
    cout << "Cups are reshuffled before every guess.\n";
    cout << "Enter '0' to quit.\n";
    
    // Loop control
    while (true) {
        
        // The ball is generated/reshuffled every iteration.
        const int ball_cup = (rand() % 3) + 1;
        
        // Display the current cups setup using the multi-line design
        display_cups_hidden();
        
        cout << "Which cup (1, 2, or 3) holds the ball? Enter your guess: ";
        
        // Get the user's guess
        if (!(cin >> user_guess)) {
            cerr << "Invalid input. Ending game.\n";
            break; 
        }
        
        // 1. Check for the exit command
        if (user_guess == 0) {
            cout << "\n👋 Thanks for playing! Goodbye.\n";
            break; 
        }

        // 2. Check if the guess is valid (between 1 and 3)
        if (user_guess < 1 || user_guess > 3) {
            cout << "🚫 That's not one of the cups! Please guess 1, 2, or 3.\n";
        } else {
            // 3. Reveal the result
            display_cups_revealed(ball_cup); // Call the function to display the result visually

            if (user_guess == ball_cup) {
                cout << "\n🎉 **WINNER!** You guessed correctly!\n";
                break; // Game ends after a correct guess
            } else {
                cout << "\nUnlucky! The ball was not under Cup " << user_guess << ". Try again!\n";
            }
        }
    }

    return 0;
}