#include<iostream>
using namespace std;

int main(){

    cout  << endl << "Program execution starts " << endl << endl ;

    int n;
    cout << "Enter the value of n ";
    cin >> n;
    
    int row = 1;
     while (row <= n){
        int col = 1;
        while(col <= row){
            cout << " * ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }

     row = 1;
     while (row <= n){
        int col = 1;
        while(col <= row){
            cout << " " << col << " ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }

    row = 1;
     while (row <= n){
        int col = 1;
        int value = row;
        while(col <= row){
            cout << " " << value << " ";
            value = value + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }

    cout << endl << "Program execution finishes " << endl << endl ;
}