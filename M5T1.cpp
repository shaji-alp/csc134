#include <iostream>
using namespace std;

void say_hello();

int get_answer();

double double_number(double);

int main(){
    double num;
    int num2;

    say_hello();
    cout<< "enter a number with or without decimal places ";
    cin>>num;
    num= double_number(num);
    cout<<" Double the number is= "<< num<< endl;
    cout<<"but the only answer is = "<< get_answer()<<endl;

}
void say_hello(){
    cout<<"greetings"<< endl;
}

int get_answer(){
    return 42;

}

double double_number(double num){
    double answer= num*2;
    return answer;
}