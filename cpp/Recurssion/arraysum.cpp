#include<iostream>
using namespace std;

bool isSorted(int *arr, int size){
    if( size == 0 || size == 1 )
        return true;
    if(arr[0]>arr[1])
        return false;
    else{
        bool remaningPart = isSorted(arr+1 , size-1);
        return remaningPart;
    }
}

int arraySum(int arr[], int size){
    if(size==0)
        return 0;
    if(size==1)
        return arr[0];
    
    int ans = arraySum(arr+1, size-1);
    return arr[0] + ans;
}

int main(){

    cout  << endl << "Program execution starts " << endl << endl ;

    int arr[] = {2,4,10,9,13,16};
    int size = 6;

    bool ans = isSorted(arr, size);

    if(ans)
        cout << "arrar is sorted" << endl;
    else
        cout << "Array is not sorted" << endl;
    
    cout << "Sum of Array "<< arraySum(arr,size) << endl;

    

    cout << endl << "Program execution finishes " << endl << endl ;
}