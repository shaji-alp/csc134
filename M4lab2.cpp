/*
CSC 134
nested loops and rectangles
Alphons Shaji
16/8/25
*/

#include <iostream>
using namespace std;

int main(){
    int len,wid;
    cout<<"enter length- ";
    cin>>len;
    cout<<"\nenter width- ";
    cin>>wid;
    string tile="📐";

    cout<<endl<<endl;
    cout<<"rectangle- "<<len<<"x"<<wid<<endl;

    for (int i=1;i<=wid;i++){
        for (int i=1;i<=len;i++){
            cout<< tile;
        }
        cout<<endl;
    }

}