/*
*/ 
#include <iostream>
using namespace std;

int main() {
    double l1, l2, w1, w2,area1,area2;
    cout<< "Enter the length and width of 2 rectangles"<< endl;
    cout<<"enter for 1st rectangle"<< endl;
    cout<<"Length: ";
    cin>> l1;
    cout<<"Width: ";
    cin>> w1;
    cout<<"enter for 2nd rectangle"<< endl;
    cout<< "length: ";
    cin>> l2;
    cout<<"width: ";
    cin>> w2;

    area1=l1*w1;
    area2=l2*w2;

    cout<< "first rectangle area= "<< area1<< endl;
    cout<< "second rectangle area= "<< area2<< endl;

    if (area1>area2){
        cout<<"1st rectangle is larger"<< endl;
    }
    if (area1<area2){
        cout<<"2nd rectangle is larger"<< endl;
    }
    if (area1==area2){
        cout<<"same size"<< endl;
    }
    return 0;
}