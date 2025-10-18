// CSC 134
// M4T1 - While
// Alphons SHaji
// 10/18/2025


#include <iostream>
using namespace std;
  
int main()
{

    // Part 1, just say "hi" five times
    int count = 1;
    while (count <= 5) {
        cout << "Hello number " << count << endl;
        count=count+1;
    }
    int number=0;
    int square;
    cout<< "numbers and their quares"<< endl;
    while (number<=10){
        square=number*number;
        cout<<number<<"\t"<<square<<endl;
        number=number+1;

    }

}