#include <iostream>
using namespace std;

int square(int i);
void printanswerline(int solution,int x);

int main(){
    int solution;
    for (int i=0;i<=10;i++){
        solution=square(i);
        printanswerline(solution,i);
    }
}
int square(int i){
    int square,solution;
    solution= i*i;
    return solution;
}
void printanswerline(int solution,int i){
    cout<<i<<"\t"<<solution<<endl;
}
