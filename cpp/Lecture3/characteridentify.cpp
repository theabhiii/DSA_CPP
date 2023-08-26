#include<iostream>
using namespace std;

int main(){

    char c;
    cout << " Enter the Character :";
    cin >> c;

    if((c>='a') && (c<='z')){
        cout << "Character is a small alphabet";
    }
    else if((c>='A') && (c<='Z')){
        cout << "Character is a Capital alphabet";
    }
    else if((c>='0') && (c<='9')){
        cout << "Character is a Number";
    }
    else{
        cout << "Character doesn't meet any criteria";
    }
}