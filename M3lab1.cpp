/*CSC 134
Adventure
Alphons Shaji
9/24/25*/

#include <iostream>
using namespace std;

void house();
void mcdonald();
void chickfila();
int choice;


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
void mcdonald(){
    cout<<"You came to McDonalds"<< endl;
    cout<<"1. Go to cashier"<< endl;
    cout<< "2.Go to evil cashier" << endl;

    cin>> choice;

    if (choice==1){
        cout<<"Cashier- Would you like to buy cheeseburger"<< endl;
        cout<<"1.yea"<< endl;
        cout<<"2.no"<< endl;
        cin>> choice;

        if (choice==1){
            cout<<"You bought burger"<<endl;
            cout<<"You are not hungry anymore"<<endl;
            cout<<"You went back home and slept"<<endl;
        }
        else if(choice==2){
            cout<<"ok"<<endl;
            mcdonald();
        }
    }
    else if(choice==2){
        cout<< "greetings mortal ! eat this evil cheeseburger"<< endl;
        cout<< "1.yes"<< endl;
        cout<< "2.Yes"<< endl;
        cout<< " You ate the evil cheeseburger"<< endl;
        cout<< " You are evil now"<< endl;
        cout<< " You will never be hungry again"<< endl;
    }
}
void chickfila(){
    cout<<"ChicFilA is closed because it sunday"<< endl;
    cout<<"You are very hungry"<< endl;
    cout<<"you died of starvation"<< endl;


}