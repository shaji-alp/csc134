#include <iostream>
#include <string>
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
    else if (choice==2){
        void volume();
    }
    else if (choice==3){
        void romannum();
    }
    else if (choice==4){
        void geometrycalc();
    }
    else if (choice==5){
        void distance();
    }
    else{
        cin.clear();
        cout<<"Invalid input"<<endl;
        main();
    }
}
void averagerainfall(){
    string month1,month2,month3;
    int rain1,rain2,rain3;
    cout<<"\nEnter month ";
    cin>>month1;
    cout<<"\nEnter rainfall for "<<month1<<" ";
    cin>>rain1;
    cout<<"\nEnter month ";
    cin>>month2;
    cout<<"\nEnter rainfall for "<<month2<<" ";
    cin>>rain2;
    cout<<"\nEnter month ";
    cin>>month3;
    cout<<"\nEnter rainfall for "<<month3<<" ";
    cin>>rain3;
}
