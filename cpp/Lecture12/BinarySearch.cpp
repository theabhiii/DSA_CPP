#include<iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key){

    int start = 0;
    int end = size -1;

    int mid = start + (( end - start )/2);

    while ( start <= end ){
        // cout << mid <<endl;
        if (arr[mid] == key ){
            return mid;
        }

        if(arr[mid] < key ){
            start = mid + 1;
            // cout << start <<endl;

        }
        else {
            end = mid -1;
            // cout << end <<endl;

        }
         mid = start + (end - start)/2;

    }
    return -1;
}

int main(){

    cout  << endl << "Program execution starts " << endl << endl ;

    int even[6]= {2,4,6,8,10,12};
    int odd[7] = {1,3,5,7,9,11,13};

    int evenIndex = BinarySearch(even, 6, 10);
    int oddIndex = BinarySearch(odd, 7, 3);

    cout << " Index of 10 in even is " << evenIndex << endl;
    cout << " Index of 3 in odd is " << oddIndex << endl;

    cout << endl << "Program execution finishes " << endl << endl ;
}