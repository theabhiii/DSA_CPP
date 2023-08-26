#include<iostream>
using namespace std;

int main(){

    cout  << endl << "Program execution starts " << endl << endl ;

    int n;
    cout << "Enter the value of n :";
    cin >> n;

    int row = 1;

    while (row <= n){

        int col = 1;

        while (col <= (n-row+1)){
            cout << col;
            col= col +1;
        }


        cout << endl;
        row++;

    }

    cout << endl << "Program execution finishes " << endl << endl ;
}