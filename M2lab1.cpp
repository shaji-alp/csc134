/*
CSC134
M2lab1
Alphons SHaji
9/8/25
*/
#include <iostream>
using namespace std;


int main() {
    double length, width, height,volume;
    double cost_to_make, charge_to_customer;
    double profit;


    const double COST_PER_CUBIC_FOOT= 0.23;
    const double CHARGE_PER_CUBIC_FOOT= 0.5;

    cout<< "welcome to thr crate program "<< endl;
    cout<< "crate lenghts "<< endl;
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

    return 0;

}


