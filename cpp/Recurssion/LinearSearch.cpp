#include<iostream>
using namespace std;

bool isPresent(int *arr , int size, int key){

    if(size ==0)
        return false;
    
    if(arr[0] == key){
        return true;
    }
    else{
        bool remainingPart = isPresent(arr+1, size-1, key);
        return remainingPart;
    }

}

int main(){

    cout  << endl << "Program execution starts " << endl << endl ;

    int arr[] = {2,4,10,9,13,16};
    int size = 6;

    bool ans = isPresent(arr, size, 6);

    if(ans)
        cout << "key is present" << endl;
    else
        cout << "key is not present" << endl;

    cout << endl << "Program execution finishes " << endl << endl ;
}