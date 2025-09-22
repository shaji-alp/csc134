/*
M3T2
csc134
Alphons Shaji
9/22/25*/

#include<iostream>
#include<cstdlib> // for rand() and srand()
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
   int point ;
   // setes rng before roll
   srand(time(0));

   roll1= roll();
   cout<<"roll1 "<<roll1<<endl;
   roll2= roll();
   cout<<"roll2 "<<roll2<<endl;
 
   int sum=roll1+roll2;
   cout<<"sum "<<sum<<endl;

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
    int my_roll;
    my_roll= (rand()%6)+1; //1-6
    return my_roll;
}