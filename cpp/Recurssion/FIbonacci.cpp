#include<iostream>
using namespace std;

int fib(int n){
    if(n==0)
        return 0;
    if(n==1)
        return 1;

    return fib(n-1) + fib(n-1);
}

int main(){

    cout  << endl << "Program execution starts " << endl << endl ;

    cout << "Fibonacci nth term is :" << fib(8) << endl;

    cout << endl << "Program execution finishes " << endl << endl ;
}