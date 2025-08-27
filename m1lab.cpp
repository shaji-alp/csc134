/*
csc134
milab
Alphons Shaji
8/27/25
purpose-the mango sales program
*/

//magic word
#include <iostream>
using namespace std;

int main() {
    //start program
    string item_name = "mango";
    int num_items = 67;
    double cost_per = 0.25;

    cout << "welcome to the " << item_name << " store!"<< endl;
    cout << "each " << item_name << " is "<< cost_per << endl; 
    cout << "we have " << num_items << " total." << endl;
    //processing

    double total_cost= num_items * cost_per;
    cout << "buying them all will cost " << total_cost << endl;

    //end program
    return 0;
}
