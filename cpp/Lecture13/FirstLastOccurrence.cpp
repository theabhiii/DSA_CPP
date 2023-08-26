#include<iostream>
using namespace std;

int FirstOccur(int arr[], int size, int key){

    int start = 0;
    int end = size -1;
    int ans = -1;

    int mid = start + (( end - start )/2);

    while ( start <= end ){
        // cout << mid <<endl;
        if (arr[mid] == key ){
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid] < key ){
            start = mid + 1;
            // cout << start <<endl;

        }
        else if(arr[mid] > key) {
            end = mid -1;
            // cout << end <<endl;

        }
        mid = start + (end - start)/2;

    }
    return ans;
}

int LastOccur(int arr[], int size, int key){

    int start = 0;
    int end = size -1;
    int ans = -1;

    int mid = start + (( end - start )/2);

    while ( start <= end ){
        // cout << mid <<endl;
        if (arr[mid] == key ){
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid] < key ){
            start = mid + 1;
            // cout << start <<endl;

        }
        else if(arr[mid] > key) {
            end = mid -1;
            // cout << end <<endl;

        }
        mid = start + (end - start)/2;

    }
    return ans;
}

int main(){

    cout  << endl << "Program execution starts " << endl << endl ;

    int even[6]= {0,5,5,6,6,6};
    int odd[8] = {0,0,1,1,2,2,2,2};

    cout << endl << "First Occurrence of 5 in even array  " << FirstOccur(even , 6 , 6)<< endl << endl ;
    cout << endl << "Last Occurrence of 5 in even array  " << LastOccur(even , 6 , 6)<< endl << endl ;

    cout << endl << "First Occurrence of 2 in odd array  " << FirstOccur(odd , 8 , 1)<< endl << endl ;
    cout << endl << "Last Occurrence of 2 in odd array  " << LastOccur(odd , 8, 1)<< endl << endl ;

    cout << endl << "Program execution finishes " << endl << endl ;
}