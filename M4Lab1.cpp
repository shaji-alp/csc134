/**/
 #include <iostream>
#include <string>
using namespace std;

// Function prototypes
void exercise1_healthRegen();
void exercise2_levelUpStats();
void exercise3_inventorySystem();

int main(){
    int choice;
    cout << "==================================" << endl;
    cout << "    LAB 7: LOOP FUNDAMENTALS      " << endl;
    cout << "==================================" << endl;
    cout << "1. Exercise 1: Health Regeneration" << endl;
    cout << "2. Exercise 2: Level Up Stats" << endl;
    cout << "3. Exercise 3: Inventory System" << endl;
    cout << "4. Run All Exercises" << endl;
    cout << "5. Exit" << endl;
    cout << "==================================" << endl;
    cout << "Choice: ";
    cin >> choice;

    switch(choice){

        case 1:
            exercise1_healthRegen();
            break;
        case 2:
            exercise2_levelUpStats();
            break;
        case 3:
            exercise3_inventorySystem();
            break;
        case 4:
            exercise1_healthRegen();
            cout << endl;
            exercise2_levelUpStats();
            cout << endl;
            exercise3_inventorySystem();
            break;
        case 5:
            cout << "Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
void exercise1_healthRegen(){
    cout <<"EXERCISE 1: HEALTH REGENERATION" << endl;
    int health=30;
    int maxhealth=100;
    string healthbar="|||";
    while(health<=maxhealth){
        cout<< "health= "<<health<< endl;
        cout<<"health ["<<healthbar<<"]"<<endl;
        healthbar=healthbar+"|" ;              
        health=health+10;
    }


}
void exercise2_levelUpStats(){
    // Base stats at level 0
    const int BASE_STR = 10;
    const int BASE_DEX = 8;
    const int BASE_INT = 12;
    int level, str, dex , intel;

    // TODO: Display table header
    cout << "Level |  STR  |  DEX  |  INT" << endl;
    cout << "------|-------|-------|-------" << endl;

    for(int i=0;i<=10;++i){
        level=i;
        str=BASE_STR+(level*2);
        dex=BASE_DEX+(level*3);
        intel=BASE_STR+(level*1);
        
        cout<<level<<"     |"<<str<<"     |"<<dex<<"     |"<<intel<<"      |"<<endl;
    }
    cout<<"total growth: STR +"<<str-BASE_STR<<" DEX +"<<str-BASE_DEX<<" INTELLINGENCE +"<<str-BASE_INT<<endl;
}
void exercise3_inventorySystem(){
    cout<<"hi";
}