#include<iostream>
using namespace std;

void SelectionSort(int arr[], int size){

    for (int i = 0 ; i < size-1 ; i++){
        int minIndex = i;

        for (int j = i+1 ; j< size ; j++){

            if (arr[minIndex] > arr[j])
                minIndex = j;
        }
        swap(arr[minIndex] , arr[i]);
    }
}

int main(){
    int arry[] = {15,10,30,8,9};

    SelectionSort(arry, 5);

    for (int i = 0 ; i < 6 ; i ++)
        cout<< arry[i] ;

}