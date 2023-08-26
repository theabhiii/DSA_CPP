#include<iostream>
using namespace std;

int main(){

    cout  << endl << "Program execution starts " << endl << endl ;

    int n=0;
    cout << "Enter the value of n :";
    cin >> n;

    int i = 1;
    int count =1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout <<  count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }

    cout << endl << "Program execution finishes " << endl << endl ;
}