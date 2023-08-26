#include<iostream>
using namespace std;

void TakeInput(int arr[], int size){

    for (int i = 0; i < size; i ++){
        cout << " Enter the element to be inserted at index "<< " " << i << ":";
        cin >> arr[i] ;
    }

}

void PrintArray(int arr[], int size){
    cout << " Printing Array " << endl;
    for (int i = 0; i < size; i ++){
        cout << arr[i] << " " ;
    }
    cout << endl << " Printing Array finished " << endl;
}

void SwapAlternate( int arr[], int size){
    cout << endl << " alternate Swapping Started " << endl;
    for (int i = 0; i < size; i+=2){
        if(i+1 < size){
            swap(arr[i],arr[i+1]);
        }
    }
    cout << endl << " alternate Swapping Finished " << endl;
}

int main(){

    cout  << endl << "Program execution starts " << endl << endl ;

    int arr[100];
    int size;
      cout << "Enter the size of the Array :";
      cin >> size;
    
    TakeInput(arr,size);
    PrintArray(arr,size);
    SwapAlternate(arr,size);
    PrintArray(arr,size);
    

    cout << endl << "Program execution finishes " << endl << endl ;
}