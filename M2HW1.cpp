/*
CSC 134
M2HW1 - gold
Alphons Shaji
9/15/25
*/
#include <iostream>
using namespace std;

int main() {
    /*QUESTION !*/
    cout<< "Question 1"<< endl;
    string name;
    double deposit, withdraw, balance;

    cout<<"enter name: " ;
    cin>> name;
    cout<<"deposit amount: ";
    cin>>deposit;
    cout<<"Withdraw amount: ";
    cin>> withdraw;
    balance= deposit- withdraw;

    cout<<"Account name: "<< name<< endl;
    cout<<"Account number: 1234543210"<< endl;
    cout<<"Balance; "<< balance<< endl;
    /*End of Question1*/

    cout<<endl;
    cout<<endl;

    /*Question2 */
    cout<< "Question 2"<< endl;
    double length, width, height,volume;
    double cost_to_make, charge_to_customer;
    double profit;


    const double COST_PER_CUBIC_FOOT= 0.3;
    const double CHARGE_PER_CUBIC_FOOT= 0.52;

    cout<< "welcome to thr crate program "<< endl;
    cout<< "crate lenghts ";
    cin>> length;
    cout<< "crate width ";
    cin>> width;
    cout<< "crate height ";
    cin>> height;

    volume= length*height* width;
    cost_to_make= volume* COST_PER_CUBIC_FOOT;
    charge_to_customer= volume* CHARGE_PER_CUBIC_FOOT;
    profit= charge_to_customer- cost_to_make;

    cout<<endl;
    cout<<"your crate is "<< volume<< " cubic feet"<< endl;
    cout<< "customer price: $"<< charge_to_customer<< endl;
    cout<< "cost to build $"<< cost_to_make << endl;
    cout<< "profit $"<<profit << endl;
    /*End of Q2*/

    cout<<endl;
    cout<<endl;

    /*Question 3*/
    cout<< "Question 3"<< endl;
    const int slice_person=3;
    int slice_pizza, box, people, leftovers;

    cout<<"Each visitor gets 3 slices"<< endl;
    cout<<"enter the total amount of pizzas: " ;
    cin>> box;
    cout<<"Slices per pizza: ";
    cin>>slice_pizza;
    cout<<"Number of visitors: ";
    cin>> people;

    leftovers=(box*slice_pizza)-(slice_person*people);
    cout<< "there are "<< leftovers << " slices of pizza leftover"<< endl;
    /*end of question 3*/

    cout<<endl;
    cout<<endl;

    /*Question 4*/
    cout<< "Question 4"<< endl;
    string school, team, cheer, cheer1, cheer2, schoolcheer,teamcheer;
    school= "FTCC ";
    team= "Trojans ";
    cheer1= "Let's ";
    cheer2= "go ";
    cheer = cheer1 + cheer2;
    schoolcheer = cheer+ school;
    teamcheer= cheer+ team;

    cout<<schoolcheer<<endl;
    cout<<schoolcheer<<endl;
    cout<<schoolcheer<<endl;
    cout<<teamcheer<<endl;
    /*End of question 4*/


    return 0;

}