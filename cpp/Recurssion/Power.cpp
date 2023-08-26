#include<iostream>
using namespace std;

int pow(int a, int b){
    if(b==0)
        return 1;

    if(b==1)
        return a;
    
    int ans = pow(a,b/2);

    if(b%2==0){
        return ans*ans;
    }else{
        return a*ans*ans;
    }
}

int main(){

    cout  << endl << "Program execution starts " << endl << endl ;

    int a ,b;
    cin >> a;
    cin>>b;

    int ans = pow(a,b);

    cout << "Reversed string is " << ans << endl;

    cout << endl << "Program execution finishes " << endl << endl ;
}