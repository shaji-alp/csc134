/*CSC134
Alphons Shaji
Tier Gold*/

#include <iostream>

using namespace std;

void table1(int);

int main(){
    int num;
    cout<< "enter a number between 1 and 12 for times table ";
    cin>> num;
    if (num>=1 and num<=12){
        table1(num);
    }
    else{
        cout<<"invalid input"<<endl;
        main();
    }
    
}
void table1(int num){
    int sol;
    for(int i=1;i<=12;i++){
        sol=num*i;
        cout<<num<<" times "<<i<<" is "<<sol<<endl;

    }
}
