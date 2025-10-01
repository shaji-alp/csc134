/*
csc 134
M3bonus
Alphons Shaji
custom story game
expansion of the story from M3lab1*/

#include <iostream>
using namespace std;

void house();
void mcdonald();
void chickfila();
void kfc();
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
            cout<<" GOOD ENDING !!! ";
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
        cout<< " EVIL ENDING !!!";
    }
}
void chickfila(){
    int choice;
    cout<<"ChicFilA is closed because it sunday"<< endl;
    cout<<"You are very hungry"<< endl;
    cout<<"Go to KFC instead?"<< endl;
    cout<< "1.yes"<< endl;
    cout<< "2.no"<< endl;
    cin>> choice;

    if (choice==1){
        cout<<"You walked to the kfc accross the street"<<endl;
        kfc();
    }
    else if(choice==2){
        cout<<"ok"<<endl;
        cout<<"you knocked on the door"<<endl;
        cout<<"theres noone inside"<< endl;
        cout<<"break in??"<< endl;
        cout<<"1.yea"<< endl;
        cout<<"2.no"<< endl;
        cin>> choice;

        if (choice==1){
            cout<<"You broke the window on the door"<<endl;
            cout<<"the alarm went off"<<endl;
            cout<<"the cops are on their way"<<endl;
            cout<<"What will you do?? "<< endl;
            cout<<"1.eat what you can find"<< endl;
            cout<<"2.run"<< endl;
            cin>> choice;

            if (choice==1){
             cout<<"You ate what you could until the police came"<<endl;
             cout<<"the police are here"<<endl;
             cout<<"the cops arrested you"<< endl;
             cout<<"Atleast you arent hungry"<< endl;
             cout<<"CRIMINAL ENDING !!!";

            }
            else if(choice==2){
             cout<<"you ran outside"<<endl;
             cout<<"The cops are chasing you"<< endl;
             cout<<"You keep running "<< endl;
             cout<<"you kept running forever while the cops chase you on some trainracks"<< endl;
             cout<<"SUBWAY SURFERS ENDING !!!"<< endl;
            }
        }
        else if(choice==2){
            cout<<"ok"<<endl;
            house();
        }
    }

}
void kfc(){
    int choice;
    cout<< "Welcome"<< endl;
    cout<< "1.greetings"<< endl;
    cout<< "2.hello"<< endl;
    cin>> choice;
    if (choice==1){
        cout<<"greetings"<<endl;
        cout<<"congratulation for being the 1 millionth customer !!!!!!!"<< endl;
        cout<<"you win infinite kfc for life !!!!"<< endl;
        cout<<"You will never be hungry again"<< endl;
        cout<< " Decent ending !!! "<< endl;
    }
    else if(choice==2){
        cout<<"the wait time is cuurently 6 minutes"<<endl;
        cout<<"Can you survive for 6-minutes?"<< endl;
        cout<< "1.yes"<< endl;
        cout<< "2.no"<< endl;
        cin>> choice;

        if (choice==1){
         cout<<"You are very hungry"<<endl;
         cout<<"You are starving"<<endl;
         cout<< "you couldnt handle the wait time"<<endl;
         cout<<"you died of starvation"<< endl;
         cout<<" STARVATION ENDING !!!";
        }
        else if(choice==2){
         cout<<"ok"<<endl;
         cout<<"you can have this packet of chips right now"<< endl;
         cout<<" you ate the chips"<< endl;
         cout<< " you barely survied for 6 mins"<<endl;
         cout<< "you are not hungry anymore" << endl;
         cout<< "GOOD ENDING 2 !!!";
         
        }
        
    }

}