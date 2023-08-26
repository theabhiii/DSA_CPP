#include <iostream>
#include <vector>
#include <algorithm> // add this header for find() algorithm

using namespace std;

int main() {
    vector<int> arr = {1, 5, 11, 13};
    vector<int> missing_nums;

    for (int i = arr.front(); i <= arr.back(); i += 2) {
        if (find(arr.begin(), arr.end(), i) == arr.end()) {
            missing_nums.push_back(i);
        }
    }

    if (missing_nums.size() == 0) {
        cout << "No missing odd numbers found." << endl;
    } else {
        cout << "Missing odd numbers: ";
        for (int num : missing_nums) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
