/*
Project CSC 134
Alphons Shaji
2 player tic tac toe*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;
int Xenter();
int Oenter();
bool validinput(int x);
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
    
    for (int i=0 ;i<10;i++){

        cout<<placeholder[0]<<"\t||\t"<<placeholder[1]<<"\t||\t"<<placeholder[2]<<"\n";
        cout<<"__________________________________\n";
        cout<<placeholder[3]<<"\t||\t"<<placeholder[4]<<"\t||\t"<<placeholder[5]<<"\n";
        cout<<"__________________________________\n";
        cout<<placeholder[6]<<"\t||\t"<<placeholder[7]<<"\t||\t"<<placeholder[8]<<"\n";

        if ((placeholder[0]=="❌" and placeholder[1]=="❌" and placeholder[2]=="❌") or (placeholder[3]=="❌" and placeholder[4]=="❌" and placeholder[5]=="❌")or(placeholder[6]=="❌" and placeholder[7]=="❌" and placeholder[8]=="❌")or(placeholder[0]=="❌" and placeholder[3]=="❌" and placeholder[6]=="❌") or (placeholder[1]=="❌" and placeholder[4]=="❌" and placeholder[7]=="❌")or(placeholder[2]=="❌" and placeholder[5]=="❌" and placeholder[8]=="❌")or (placeholder[0]=="❌" and placeholder[4]=="❌" and placeholder[8]=="❌")or(placeholder[2]=="❌" and placeholder[4]=="❌" and placeholder[6]=="❌")){
            cout<<"Player 1 wins!!"<<endl;
            win=true;
            break;
        }
        else if ((placeholder[0]=="🟢" and placeholder[1]=="🟢" and placeholder[2]=="🟢") or (placeholder[3]=="🟢" and placeholder[4]=="🟢" and placeholder[5]=="🟢")or(placeholder[6]=="🟢" and placeholder[7]=="🟢" and placeholder[8]=="🟢")or(placeholder[0]=="🟢" and placeholder[3]=="🟢" and placeholder[6]=="🟢") or (placeholder[1]=="🟢" and placeholder[4]=="🟢" and placeholder[7]=="🟢")or(placeholder[2]=="🟢" and placeholder[5]=="🟢" and placeholder[8]=="🟢")or(placeholder[0]=="🟢" and placeholder[4]=="🟢" and placeholder[8]=="🟢")or(placeholder[2]=="🟢" and placeholder[4]=="🟢" and placeholder[6]=="🟢")){
            cout<<"Player 2 wins!!"<<endl;
            win=true;
            break;
        }
        
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
        cout<<"Tie\n";
    }
}
int Xenter(){
     int Xloc;
    bool cont= false;
    while (cont==false){
        cout<<"Player 1 enter location of X"<<endl;
        cin>>Xloc;
        Xloc=Xloc-1;
        cont= validinput(Xloc);
        if (cont==true){
            return Xloc;
        }
        cout<<"invalid input"<<endl;
    }  
}
int Oenter(){
    int Oloc;
    bool cont= false;
    while (cont==false){
        cout<<"Player 2 enter location of O"<<endl;
        cin>>Oloc;
        Oloc=Oloc-1;
        cont= validinput(Oloc);
        if (cont==true){
            return Oloc;
        }
        cout<<"invalid input"<<endl;
    }  
}
bool validinput(int x){
    if ((placeholder[x]=="❌") or (placeholder[x]=="🟢")){
        return false;
    }
    else {
        return true;
    }
}