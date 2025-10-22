/*CSC134
Alphons Shaji
Tier Gold*/

#include <iostream>

using namespace std;

void table1();

int main(){
    int num;
    cout<< "enter a number between 1 and 12 for times table ";
    cin>> num;
    if (num>=1 and num<=12){
        table1(num);
    }
    else{
        main();
    }
}
void table1(num){
    int sol;
    for (i<=12,i=1,i++){
        sol= abc*i;
        cout<<abc<<" times "<<i<<" is "<<sol<<endl;
    }
}
