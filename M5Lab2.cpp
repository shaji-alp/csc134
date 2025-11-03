#include <iostream>
using namespace std;

double getlen();
double getwid();
double getarea();
void displaydata();

int main(){
    double len,wid,area;
    len=getlen();
    wid=getwid();
    area=getarea();
    displaydata();
}
double getlen(){
    double len;
    cout<<"enter length ";
    cin>>len;
    return len;
}
double getwid(){
    double wid;
    cout<<"enter width ";
    cin>>wid;
    return wid;
}
double getarea(double len,double wid){
    double area;
    area= len*wid;
    return area;
}
void displaydata(double len, double wid, double area){
    cout<<"Rectangle is "<< len<<" long and "<<wid<<" wide"<<endl;
    cout<< "The area is "<< area<<endl;
}