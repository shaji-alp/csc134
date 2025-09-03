#include <iostream>
using namespace std;

int main() {
    string string_name = "mangoes";
    double cost_per= 0.67;
    int amount= 99;
    int amount_purchased;
    double total_cost;

    // greet user
    cout<< "greetings! welcome to our " << string_name<< " store1"<< endl;
    //ask info
    cout<< " each "<< string_name << " cost $" << cost_per<< endl;
    cout<< "we have " << amount<< " in stock " << endl;
    cout<< " how many would you like to buy?"<< endl; 
    cin>> amount_purchased;
    // calculation
    total_cost=amount_purchased* cost_per;

    cout<<""<< endl;
    cout<< amount_purchased<< " mangoes cost $"<< total_cost<< endl;
}