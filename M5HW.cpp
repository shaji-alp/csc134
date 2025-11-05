/*
Csc-134
M5HW1
Alphons Shaji
11/5/25
tier gold*/
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
        averagerainfall();
    }
    else if (choice==2){
        volume();
    }
    else if (choice==3){
        romannum();
    }
    else if (choice==4){
        geometrycalc();
    }
    else if (choice==5){
        distance();
    }
    else{
        cin.clear();
        cout<<"Invalid input"<<endl;
        main();
    }
}
void averagerainfall(){
    string month1,month2,month3;
    int rain1,rain2,rain3,average;
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
    average=(rain1+rain2+rain3)/3;
    cout<<"Average rainfall for "<<month1<<", "<<month2<<" and "<<month3<<" is "<<average<<endl;
}
void volume(){
    double length, width, height, volume;
    cout<<"enter length, width and height for volume!!"<<endl;
    cout<<"length ";
    cin>>length;
    cout<<"width ";
    cin>>width;
    cout<<"height ";
    cin>>height;
    volume=length*width*height;
    cout<<"The volume is "<< volume<<endl;
    
}
void romannum(){
    int num;
    cout<<"enter a number between 1 and 10 for roman numeral ";
    cin>>num;
    if (num>=1 and num<=10){
        if ((num>=1 and num<=3)or(num>=6 and num<=8))
    }
    else{
        cout<<"invalid input"<<endl;
        romannum();
    }
}
void geometrycalc(){
    cout<<"hi";
}
void distance(){
    cout<<"hi";
}