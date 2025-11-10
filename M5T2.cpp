#include <iostream>
using namespace std;

int square(int i);
void printanswerline(int i,int x);

int main(){
    int x;
    for (int i=0;i<=10;i++){
        x=i;
        square(i);
        printanswerline(i,x);
    }
}
int square(int i){
    int square;
    square= i*i;
    return square;
}
void printanswerline(int i,int x){
    cout<<x<<"\t"<<i<<endl;
}
