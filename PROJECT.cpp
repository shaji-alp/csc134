#include <iostream>
#include <string>
#include <vector>

using namespace std;
int Xenter();
int Oenter();
bool validinput(int loc);
bool checkwin(string x[]);
void board();

// GLOBAL VARIABLES
// If you create an array here, before main(), it can be accessed by any function.
const int spot=9;
string placeholder[spot]={"1","2","3","4","5","6","7","8","9"};

int main(){
    cout<<"Welcome. Player 1 is X. Player 2 is O"<<endl;
    board();
}
void board(){
    bool win= false;
    int hi=0;

    for (int i;i<10;i++){
        win=checkwin(placeholder[spot]);
        cout<<placeholder[0]<<"\t||\t"<<placeholder[1]<<"\t||\t"<<placeholder[2]<<"\n";
        cout<<"__________________________________\n";
        cout<<placeholder[3]<<"\t||\t"<<placeholder[4]<<"\t||\t"<<placeholder[5]<<"\n";
        cout<<"__________________________________\n";
        cout<<placeholder[6]<<"\t||\t"<<placeholder[7]<<"\t||\t"<<placeholder[8]<<"\n";
        win=false;
        if (i<9){
            if (hi==0){
                hi=1;
                int xnum;
                xnum=Xenter();
                placeholder[xnum]="❌";
            }
            else if (hi==1){
                hi=0;
                int onum;
                onum=Oenter();
                placeholder[onum]="🟢";
            }
        } 
    }
    if (win==false){
        cout<<"Tie";
    }
}
int Xenter(){
    int Xloc;
    bool cont=false;
    cout<<"Player 1 enter location of X"<<endl;
    cin>>Xloc;
    Xloc=Xloc-1;
    return Xloc;
}
int Oenter(){
    int Oloc;
    bool cont=false;
    cout<<"Player 2 enter location of O"<<endl;
    cin>>Oloc;
    Oloc=Oloc-1;
    return Oloc;
}
bool checkwin(string x[]){
    if ((x[0]=="X")and(x[1]=="X")and(x[2]=="X")){
        return true;
    }
    else{
        return false;
    }
}