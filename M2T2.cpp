#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // declare variables
    string item= "burger";
    double menu_price= 5.99;
    double tax_percent = 0.08;
    double tax_amount ;
    double total_price;

    // calculations
    cout<< "order up"<<endl;
    cout<< "\t"<< menu_price<< endl;

    tax_amount= menu_price*tax_percent;
    total_price= menu_price+tax_amount;

    //results
    cout<< setprecision(2)<< fixed;
    cout<< item << "\t\t"<< menu_price<< endl;
    cout<< "Tax \t\t" << tax_amount << endl;
    cout<< "total \t\t"<< total_price << endl;
}