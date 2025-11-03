#include <iostream>
using namespace std;

double getlength();
double getwidth();
double getarea(double length,double width);
void displaydata(double length, double width, double area);

int main(){
    double length,width,area;
    length=getlength();
    width=getwidth();
    area=getarea(length,width);
    displaydata(length,width,area);
}
double getlength(){
    double length;
    cout<<"enter length ";
    cin>>length;
    return length;
}
double getwidth(){
    double width;
    cout<<"enter width ";
    cin>>width;
    return width;
}
double getarea(double length,double width){
    double area;
    area= length*width;
    return area;
}
void displaydata(double length, double width, double area){
    cout<<"Rectangle is "<< length<<" long and "<<width<<" wide"<<endl;
    cout<< "The area is "<< area<<endl;
}