#include <iostream>
#include <string>
#include <vector>

using namespace std;
int Xenter();
int Oenter();
void validinput();
bool checkwin();
void board();

int main(){
    cout<<"Welcome. Player 1 is X. Player 2 is O"<<endl;
    board();
}
void board(){
    bool win= false;
    int hi=0;
    const int spot=9;
    string placeholder[spot]={"1","2","3","4","5","6","7","8","9"};
    while (win==false){
        win=checkwin();
        cout<<placeholder[1]<<"\t||\t"<<placeholder[2]<<"\t||\t"<<placeholder[]"\n";
        cout<<"----------------------------------\n";
        cout<<"X\t||\tX\t||\tX\n";
        cout<<"----------------------------------\n";
        cout<<"X\t||\tX\t||\tX\n";
        win=true;
        if (hi==0){
            hi=1;
            Xenter();
        }
        else if (hi==1){
            hi=0;
            Oenter();
        }
      
    }
}
int Xenter(){
    int Xloc;
    cout<<"Player 1 enter location of X"<<endl;
    cin>>Xloc;
    return Xloc;
}
int Oenter(){
    int Oloc;
    cout<<"Player 2 enter location of O"<<endl;
    cin>>Oloc;
    return Oloc;
}