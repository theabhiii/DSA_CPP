#include<iostream>
using namespace std;

int main(){

    cout  << "Program execution starts " << endl << endl ;
    cout << "Enter the number to be checked :";
    int n, i = 2;
    cin >> n;
    bool prime;

    while (i < n){
        if(n%i == 0){
            prime = 1;
            // cout << n << "is not a prime number inside if " << endl;
            break;
        }
        i = i+1;
    }

    if(prime){
        cout << n << " is a not prime number " << endl;
    }
    else{
        cout << n << " is a prime number " << endl;
    }

    cout << endl << "Program execution finishes " << endl << endl ;
}