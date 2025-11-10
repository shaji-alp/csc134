#include <iostream>
#include <string>
using namespace std;

// Function Declarations
void method1();
void method2();

// main
int main() {
    // Count # of Pokemon per day, two different ways
    method2();
    //method2();

    return 0;
}

// function definitions
void method1() {
    // Method one - no arrays
    // Count 5 days Pokemon, get total and average
    cout << "Enter each Pokemon found per day." << endl;
    cout << "Day 0 = Monday, Day 4 = Friday" << endl;
    const int SIZE = 5;
    int count = 0;
    int poke_today;     // current value, to add
    int poke_total = 0; // add up 
    double poke_avg = 0;// average
    double total;

    while (count < SIZE) {
        cout << "Day " << count << ": ";
        cin >> poke_today;
        poke_total += poke_today;
        count++; // Move to next day
    }
    cout << "Total = " << poke_total << endl;
    total= poke_total;
    poke_avg=total/5;
    cout << "Average = " << poke_avg << endl;
}

void method2() {
    const int SIZE=5;
    string days[SIZE]={"M","T","W","Th","F"};
    int pokemon[SIZE];
    int poketotal=0;
    double pokeavg=0.0000;

    for (int i=0; i<SIZE; i++){
        cout<<"Number of pokemon on "<<days[i]<<": ";
        cin>> pokemon[i];
    }
    cout<<"Days\tPokemon"<<endl;
    for (int i=0; i<SIZE; i++){
        cout<<days[i]<<"\t"<<pokemon[i]<<endl;
        poketotal= poketotal+ pokemon[i];
    }
    pokeavg=(double)poketotal/SIZE;
    cout<< pokeavg<<" is the average pokemon per day"<<endl;


}