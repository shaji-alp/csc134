## 📝 README: Simple Tic-Tac-Toe Game (C++)

This document provides an overview, explanation of functionality, and instructions for compiling and running the provided C++ Tic-Tac-Toe game code.

-----

## 🎲 What It Does

This C++ program implements a simple, two-player **Tic-Tac-Toe** game that runs in the console.

  * It presents a 3x3 board where positions are numbered 1 through 9.
  * Player 1 plays as **X** ($\text{❌}$), and Player 2 plays as **O** ($\text{🟢}$).
  * Players take turns entering a number (1-9) to place their mark on the board.
  * It checks for a winner after each move (three in a row, column, or diagonal).
  * If the board is full and no winner is found, the game ends in a tie.

-----

## 🛠️ How It Works

The game is structured using several functions and a global array to manage the game state.

### Global Variables

  * `const int spot = 9;`: Defines the total number of spots on the board.
  * `string placeholder[spot] = {"1 ", "2 ", ..., "9 "};`: This global array stores the state of the 9 spots on the board. Initially, it holds the numbers (1-9) for player input reference. Once a spot is played, the string is replaced with the corresponding player's marker ($\text{"❌"}$ or $\text{"🟢"}$).

### Functions

| Function Name | Description |
| :--- | :--- |
| `main()` | The entry point of the program. It prints a welcome message and immediately calls `board()` to start the game loop. |
| `board()` | This is the main **game loop** function. It: |
| | 1. **Draws the board** using the contents of the global `placeholder` array. |
| | 2. **Checks for a winner** (Player 1 $\text{❌}$ or Player 2 $\text{🟢}$) by checking all 8 possible winning combinations (3 rows, 3 columns, 2 diagonals). If a winner is found, it prints the result and breaks the loop. |
| | 3. **Handles turns**: It alternates between Player 1 (`hi == 0`) and Player 2 (`hi == 1`) by calling `Xenter()` or `Oenter()`. |
| | 4. Ends the loop after 9 moves (maximum) or when a win condition is met. If no win, it declares a **Tie**. |
| `Xenter()` | Prompts Player 1 for input, converts the 1-9 input to a 0-8 array index, validates the input using `validinput()`, and returns the valid array index. |
| `Oenter()` | Prompts Player 2 for input, converts the 1-9 input to a 0-8 array index, validates the input using `validinput()`, and returns the valid array index. |
| `validinput(int x)` | Checks if the given array index `x` is already occupied by a player's marker ($\text{"❌"}$ or $\text{"🟢"}$). Returns `true` if the spot is **free** (valid move), and `false` otherwise. |

-----

## 🚀 How to Run

### Prerequisites

You need a C++ compiler (like g++, clang, or MSVC) installed on your system.

### 1\. Save the Code

Save the entire code block provided into a file named, for example, `tictactoe.cpp`.

### 2\. Compile the Code

Open your terminal or command prompt, navigate to the directory where you saved the file, and compile it using a C++ compiler.

**Example using g++:**

```bash
g++ tictactoe.cpp -o tictactoe
```

  * `g++ tictactoe.cpp` is the command to compile the file.
  * `-o tictactoe` specifies that the executable output file should be named `tictactoe` (or `tictactoe.exe` on Windows).

### 3\. Execute the Program

Run the compiled executable from the terminal:

```bash
./tictactoe
```

*(Use `tictactoe.exe` on Windows)*

### 4\. Playing the Game

The game will start and prompt for input:

1.  The board will be displayed with numbers 1-9 indicating the available spots.
2.  **Player 1** ($\text{❌}$) will be asked to enter a location (1-9).
3.  **Player 2** ($\text{🟢}$) will be asked to enter a location (1-9).
4.  The board is redrawn after each valid move.
5.  If you enter an occupied spot, the program will display `invalid input` and ask again.
6.  The game ends when a player wins or all spots are filled (Tie).

Would you like me to suggest some ways to improve this C++ code, such as using classes or better input validation?