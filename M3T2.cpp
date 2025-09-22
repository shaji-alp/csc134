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

int mani() {
    //int num= roll();
    //cout<<num<<endl;
    //main craps cycle
    /*
    roll 2d6
    branch win, lse or poin
    */
   int roll1 =5;
   int roll2 =2;
   int sum=roll1+roll2;

   if (sum==7){
    cout<<"lucky seven-- you win"<< endl;
   }
   else{
    cout<<"did not roll a 7"<< endl;
   }


    return 0;
}
//helper function define
int roll() {
    return 6;
}