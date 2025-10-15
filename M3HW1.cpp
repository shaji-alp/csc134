// CSC 134
// M3HW1 - Gold
// Alphons Shaji
// 10/13/25

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void ques1();
void ques2();
void ques3();
void ques4();

int main(){
    cout<<"question 1"<<endl;
    ques1();
    cout<<"question 2"<<endl;
    ques2();
    cout<<"question 3"<<endl;
    ques3();
    cout<<"question 4"<<endl;
    ques4();
    
}
void ques1(){
    string yn;
    cout<<"Hello, I am a C++ program!\nDo you like me? Please type yes or no."<< endl;
    cin>> yn;
    if (yn=="yes"){
        cout<<"Yay,im sure we will get along!!!"<< endl;
    }
    else if (yn=="no"){
        cout<<"Aw man i hope i can change that"<< endl;
    }
    else{
        cout<< "i guess you are not sure about it yet..."<< endl;
    }
}
void ques2(){
    string item= "burger";
    double cost;
    double tax_percent = 0.08;
    double tip_percent= 0.15;
    double tax_amount, tip ;
    double total_price;
    int dt;

    cout<< "enter the cost of your meal $"<<endl;
    cin>> cost;
    cout<<"dine in or takeout? enter 1 or 2";
    cin>>dt;

    tax_amount= cost*tax_percent;
    tip= cost* tip_percent;
    total_price= cost+tax_amount;


    cout<< item << "\t\t"<< cost<< endl;
    cout<< "Tax \t\t" << tax_amount << endl;
    if (dt==1){
        cout<< "tip \t\t" << tip << endl;
        total_price=total_price+tip;
    }
    cout<< "total \t\t"<< total_price << endl;
}
void ques3(){
    int freewill;
    cout<<"hi, go to pool or the park. enter 1 or 2";
    cin>>freewill;
    if (freewill==1){
        cout<<"go too deep end or shallow end? 1 or 2";
        cin>>freewill;
        if (freewill==1){
            cout<<"you went to to the deeper end\n you drowned to death cuz you cant swim"<< endl;
        }
        else{
            cout<<"you had a great time at the shallow end of the pool"<< endl;
        }
    }
    else {
        cout<<"you went to the park\n You enjoyed your visit to the park"<<endl;
    }
}
int roll();
void ques4(){
    
    int num1, num2, answer, sum;
    srand(time(0));
    num1 =roll();
    num2 =roll();
    sum =num1+num2;
    cout<<"enter the sum of "<<num1<<" and "<< num2<<endl;
    cin>> answer;
    if (answer==sum){
        cout<<sum<< " is the correct answer!! good job"<<endl;
    }
    else{
        cout<<"thats incorrect... try again.";
        ques4();
    }
}
int roll(){
    int rolled_num;
    rolled_num=(rand()%10);
    return rolled_num;
}