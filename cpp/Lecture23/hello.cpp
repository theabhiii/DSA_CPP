#include<iostream>
using namespace std;

int main(){

    cout  << endl << "Program execution starts " << endl << endl ;

    int arr[3][4];

    for(int i = 0 ; i < 3; i ++){
        for (int j=0;j<=i+1;++j) {
            cin >> arr[i][j];
        }
    }

    for(int i = 0 ; i < 3 ;i++){
        for (int j=0;j<=i+1;++j) {
            cout << arr[i][j];
        }
        cout << " ";
    }

    cout << endl << "Program execution finishes " << endl << endl ;
}