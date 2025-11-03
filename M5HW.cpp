#include <iostream>
using namespace std;

void averagerainfall();
void volume();
void romannum();
void geometrycalc();
void distance();

int main(){
    int choice;
    cout<<"What function to run?"<<endl;
    cout<<"1. Average rainfall"<<endl;
    cout<<"2. Volume"<<endl;
    cout<<"3. Roman numerals"<<endl;
    cout<<"4. Geometry calculator"<<endl;
    cout<<"5. Distance calculator"<<endl;
    cout<<"enter choice(1-5) ";
    cin>>choice;

    if (choice==1){
        void averagerainfall();
    }
    else if (choice==1){
        void volume();
    }
    else if (choice==1){
        void romannum();
    }
    else if (choice==1){
        void geometrycalc();
    }
    else if (choice==1){
        void distance();
    }
    else{
        cin.clear();
        cout<<"Invalid input"<<endl;
        main();

    }
    
    
}