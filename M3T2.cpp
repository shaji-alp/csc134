/*
M3T2
csc134
Alphons Shaji
9/22/25*/

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int roll();

int main() {
    //int num= roll();
    //cout<<num<<endl;
    //main craps cycle
    /*
    roll 2d6
    branch win, lse or poin
    */
   int roll1 ;
   int roll2 ;
   
   roll1= roll();
   roll2= roll();
 
   int sum=roll1+roll2;

   if ((sum==7)||(sum==11)){
    cout<<"lucky seven or eleven-- you win"<< endl;
   }
   else if ((sum==2)||(sum==3)||(sum==12)){
    cout<< "2,3,12 - you lose"<< endl;
   }
   else {
    point= sum;
    cout<<"rolled a point"<< endl;
    cout<<"your point is: "<< point << endl;
   }
    
    return 0;
}
//helper function define
int roll() {
    return 6;
}