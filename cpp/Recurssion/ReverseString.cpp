#include<iostream>
using namespace std;

void reverse(string& str, int i , int j){

    //Base case
    if(i>j)
        return;

    swap(str[i],str[j]);
    i++;
    j--;

    reverse(str,i,j);
}

int main(){

    cout  << endl << "Program execution starts " << endl << endl ;

    string name = "abhishek";
    reverse(name, 0, name.length()-1);
    cout << "Reversed string is " << name << endl;

    cout << endl << "Program execution finishes " << endl << endl ;
}