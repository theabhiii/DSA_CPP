#include<iostream>
using namespace std;

int main(){

    cout  << "Program execution starts " << endl << endl ;

    int n=0;
    cout << "Enter the value of n :";
    cin >> n;

    int i = 0;
    while(i<n){
        int j = 0;
        while(j<n){
            cout << " * ";
            j++;
        }
        cout << endl;
        i++;
    }

    cout << endl << "Program execution finishes " << endl << endl ;
}