/*
CSC 134
M5Lab1 
Alphons Shaji
11/5/25
*/

#include <iostream>
using namespace std;

int  getPlayerChoice(int maxChoice); 
void showChoices(string choice1, string choice2, string choice3);  
void game_start();
void mcdonald();
void backflip();
void nuke();
void nukeyay();
const int MAX = 3; 

int main() {
    game_start();


    // ending
    return 0;
}

// Function definitions
/**
 * Get a valid choice from the player.
 * example: if maxChoice is 3, they can choose 1, 2, or 3.
 */
int getPlayerChoice(int maxChoice) {
    int choice;
    while (true) {
        cout << "Your choice: ";
        cin >> choice;
        // You can add extra validation if you want.

        // Validate range 
        if (choice >= 1 && choice <= maxChoice) {
            return choice; // same number they enter
        }

        cout << "Please choose between 1 and " << maxChoice << ".\n";
    }
}

void showChoices(string choice1, string choice2, string choice3) {
    // A quick menu. If a choice is empty ("") it's not shown
    // but there must always be at least one choice.
    // Example: showChoices("run","fight","hide");
    cout << "---- MAKE YOUR CHOICE ----" << endl;
    int num = 1;
    cout << num << ". " << choice1 << endl;
    num++;

    if (choice2 != "") {
        cout << num << ". " << choice2 << endl;
        num++;
    }

    if (choice3 != "") {
        cout << num << ". " << choice3 << endl;
        num++;
    }

}

//////////////////////////////////////////////////////////
// Story-related functions
// Each story choice leads to a new function
// with new text, and new choices.
//////////////////////////////////////////////////////////

// Game start
void game_start() {
    /* Every node of the story does this:
        - describe what's going on using the R"(message)" 
                cout method.
        - showChoices() with up to 3 strings included
        - getPlayerChoice() with the max set to up to 3
        - if statements to branch to other nodes

    */
   int choice;
   // R for Raw -- print every line as is until it ends
   cout << R"(You are very bored,   only if there was something interesting to do 
    )";
    // show choices
    showChoices("go to mcdonalds",
                "do a backflip",
                "make a nuclear bomb");
    // make choices
    choice = getPlayerChoice(MAX);
    // branch from here
    // in your program, call another story function!
    if (choice == 1) {
        cout << "lets go get a cheeseburger" << endl;
        mcdonald();
    }
    if (choice == 2) {
        cout << "Anythings possible if you believe in yourself" << endl;
        backflip();
    }
    if (choice == 3) {
        cout << "Order uranium and plutonium" << endl;
        nuke();
    }
}

void mcdonald(){
    int choice;
   // R for Raw -- print every line as is until it ends
   cout << R"(You ararrived at McDonalds
      Cashier- Greetings customer, want cheeseburger? Cost 1234 dollar btw 
    )";
    // show choices
    showChoices("YESS!!",
                "yes",
                "no");
    // make choices
    choice = getPlayerChoice(MAX);
    // branch from here
    // in your program, call another story function!
    if (choice == 1) {
        cout << "Youll get a discount cuz you are so excited" << endl;
        cout << "You recieved a free cheesburger" << endl;
    }
    if (choice == 2) {
        cout << "You paid 1234 dollars for a cheeseburger..." << endl;
        cout << "Tastes decent...." << endl;

    }
    if (choice == 3) {
        cout << "Why come here then??" << endl;
        game_start();
    }
}

void backflip(){
    int choice;
   // R for Raw -- print every line as is until it ends
   cout << R"(You are in position for a backflip

   Do you really believe in yourself ?
    )";
    // show choices
    showChoices("yes",
                "...maybe",
                "no");
    // make choices
    choice = getPlayerChoice(MAX);
    // branch from here
    // in your program, call another story function!
    if (choice == 1) {
        cout << "You jumped with full confidence!!!" << endl;
        cout << "You somehow landed it (YAY)" << endl;
    }
    if (choice == 2) {
        cout << "Alright" << endl;
        cout << "You attempted it" << endl;
        cout << "You landed on your neck and are now paralyzed" << endl;

    }
    if (choice == 3) {
        cout << "good choice" << endl;
        game_start();
    }
}
void nuke(){
    int choice;
   // R for Raw -- print every line as is until it ends
   cout << R"(Where do you buy this stuff from?
    )";
    // show choices
    showChoices("Amazon",
                "steal from local grocery store",
                "invade government");
    // make choices
    choice = getPlayerChoice(MAX);
    // branch from here
    // in your program, call another story function!
    if (choice == 1) {
        cout << "Amazon actually has it in stock!" << endl;
        cout << "You cant afford it tho..." << endl;
        nuke();
    }
    if (choice == 2) {
        cout << "Heading to grocery store" << endl;
        cout << "you found it!!!" << endl;
        cout << "stole it" << endl;
        nukeyay();

    }
    if (choice == 3) {
        cout << "you are the door of the storage facility" << endl;
        cout << "Unfortuantely they wont let you in... " << endl;
    
    }
}

void nukeyay(){
    int choice;
   // R for Raw -- print every line as is until it ends
   cout << R"(You have the ingredients now
    )";
    // show choices
    showChoices("carefully construct nuke",
                "non carefully construct nuke",
                "patience");
    // make choices
    choice = getPlayerChoice(MAX);
    // branch from here
    // in your program, call another story function!
    if (choice == 1) {
        cout << "You carefully crafted a massive nuke!" << endl;
        cout << "You decided to launch it" << endl;
        cout << R"(BOOOM
                  _ ._  _ , _ ._
        (_ ' ( `  )_  .__)
      ( (  (    )   `)  ) _)
     (__ (_   (_ . _) _) ,__)
         `~~`\ ' . /`~~`
              ;   ;
              /   \
_____________/_ __ \_____________
        )";
    }
    if (choice == 2) {
        cout << "you made a weak nuke" << endl;
        cout << "launch!!!" << endl;
        cout << "MINI BOOM" << endl;
        cout <<" underwhelming..."<< endl;

    }
    if (choice == 3) {
        cout << "you wauted millions of years until you only have half the amount left" << endl;
        cout << "watching it happen made feel less bored " << endl;
    
    }
}
