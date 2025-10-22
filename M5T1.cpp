#include <iostream>
using namespace std;

void say_hello();

int get_answer();

double double_answer();

int main(){
    double num;
    int num2;

    cout<<"greetings"<< endl;
    cout<< "enter a number with or without decimal places ";
    cin>>num;
    num=num*2;
    cout<<" Double the number is= "<< num<< endl;

}