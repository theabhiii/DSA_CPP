#include<iostream>
using namespace std;

int main(){
    
    int n,sum=0 , i = 0;
    cout << "Enter the value of n :";
    cin >> n;

    while(i<n){
        sum = sum + i;
        i = i+2;
    }

    cout << "The sum of even numbers between 1 to "<< n << " is " << sum << endl;

}