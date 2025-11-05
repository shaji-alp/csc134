#include <iostream>
using namespace std;

int  getchoice(int max);
void showchoice(string choice1, string choice2, string choice3);
void game_start();
const int max=3;

int main(){
    int choice;
    int max=3;
    cout<<"enter 1,2 or 3 for testing"<<endl;
    choice= getchoice(max);
    cout<<"you chose "<<choice<<endl;
}

int getchoice(int max){
    int choice;
    cin.clear();

    while(true){
        cout<<" your choice ";
        cin>>choice;
        if ((choice>=1) and(choice<=max)){
         return choice;
        }
        cout<<"invalid input"<<endl;
    }
}
void showChoices(string choice1, string choice2, string choice3) {
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
game_start(){
    
}