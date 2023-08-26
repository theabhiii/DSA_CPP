#include<iostream>
using namespace std;

bool checkPalindrome(string& str, int i , int j){

    //Base case
    if(i>j)
        return true;

    if(str[i] != str[j])
        return false;
    else
    checkPalindrome(str,i+1,j-1);
}

int main(){

    cout  << endl << "Program execution starts " << endl << endl ;

    string name = "BookkooB";
    if(checkPalindrome(name, 0, name.length()-1))
        cout << "Its a palindrome" << endl;
    else
        cout << "Its not a palindrome" << endl;


    cout << endl << "Program execution finishes " << endl << endl ;
}