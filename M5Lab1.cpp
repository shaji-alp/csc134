#include <iostream>
using namespace std;

int  getchoice(int max);

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