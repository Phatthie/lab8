/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
#include <iostream>
using namespace std;

int main(){
    int age, height;
    long bounty;
    string result = "Your character = ";
    cout << "Enter your age: ";
    cin >> age;
    if(age <= 25){
        cout << "Enter your height: ";
        cin >> height;
        if(height < 100) cout << result << "Chopper";
        else if(height < 180){ 
            cout << result << "Usopp";
        }else{
            cout << "Enter your bounty: ";
            cin >> bounty;
            if(bounty > 1100000000) cout << result << "Zoro";
            else cout << result << "Sanji";
            
        }
    }else if(age > 25 && age <= 60){
        cout << "Enter your bounty: ";
        cin >> bounty;
        if(bounty > 500000000) cout << result << "Jinbe";
        else cout << result << "Franky";
    }else cout << result << "Brook";
    return 0;
}