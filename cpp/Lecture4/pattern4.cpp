#include<iostream>
using namespace std;

int main(){

    cout  << endl << "Program execution starts " << endl << endl ;

    int n=0;
    cout << "Enter the value of n :";
    cin >> n;

    int i = 1;

    while(i<=n){
        int j = 1;
        while(j<=n){
            cout <<  (n-j+1) << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    cout << endl << "Program execution finishes " << endl << endl ;
}