/*
M3Lab2
CSC134
Alphons Shaji
*/
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

void letter_grader();
void combat();

int main() {
    letter_grader();
    combat();
    //combat()
    return 0;
}
void letter_grader(){
    double grade;
    string grade_letter;

    //contsnts
    const double A_g=90;
    const double B_g=80;
    const double C_g=70;
    const double D_g=60;

    cout<<"enter a number grade from 0-100"<<endl;
    cin>>grade;

    
    if (grade>=A_g){
        grade_letter="A";
    }
    else if (grade>=B_g){
        grade_letter="B";
    }
    else if (grade>=C_g){
        grade_letter="C";
    }
    else if (grade>=D_g){
        grade_letter="D";
    }
    else{
        grade_letter="F";
    }




    cout<<"A number grade of "<<grade<<" is a(n) "<< grade_letter<< endl;
    cout<< endl<< endl;
}
void combat(){
    int a_roll, a_bonus, enemy_armor;
    string yes_no;

    cout<<"you are fighting a goblin"<< endl;
    cout<<"enter roll"<<endl;
    cin>>a_roll;
    cout<<"enter bonus attack"<<endl;
    cin>>a_bonus;
    cout<<"enter enemy armor"<<endl;
    cin>>enemy_armor;

    if (a_roll+a_bonus>= enemy_armor){
        cout<<"Hit"<< endl;
    }
    else{
        cout<<"miss"<< endl;
    }

    cout<<"try again? y/n"<<endl;
    cin>>yes_no;
    if (yes_no=="y"){
        combat();
    }


}