/*CSC 134
Adventure
Alphons Shaji
9/24/25*/

#include <iostream>
using namespace std;

void house();
void mcdonald();
void chickfila();


int main(){
    
    cout<< "greetings! start adventure"<< endl;
    cout<<"you just woke up "<< endl;
    cout<<"you are hungry"<< endl;

    house();

    cout<<"the end"<< endl;

    return 0;
}

void house(){
    
    cout<<"1. Go to McDonalds"<< endl;
    cout<< "2.Go to chikfilA" << endl;
    cout<< "3.sleep again"<< endl;

    int choice;

    cin>>choice;
    if (choice==1){
        cout<<"you decided to go to McDonald"<<endl;
        mcdonald();
    }
    else if(choice==2){
        cout<<"you decided to go to ChicFilA"<<endl;
        chickfila();
    }
    else{
        cout<<"you slept again"<< endl;
        cout<<"you cant sleep because you just woke up"<< endl;
        house();
    }
}
