#include<iostream>
using namespace std;

int main(){

    cout  << endl << "Program execution starts " << endl << endl ;

    int n;
    cin >> n ;
    int sum = 0 , prod = 1 ;

    while (n != 0){
        int digit = n % 10;
        sum += digit;
        prod *= digit;

        n /= 10;
    }
    
    // cout << sum << "____" << prod << endl;

    int out = prod - sum;
    cout << out << endl;

    cout << endl << "Program execution finishes " << endl << endl ;
}