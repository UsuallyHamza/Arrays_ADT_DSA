#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


bool isSorted(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[10] = {4, 5, 6, 1, 7, 8, 9, 2, 3, 10};

    // Check if arr1 is sorted
    if (isSorted(arr1, 10)) {
        cout << "Array 1 is sorted\n";
    } else {
        cout << "Array 1 is not sorted\n";
    }

    // Check if arr2 is sorted
    cout << "Now for array 2\n";
    if (isSorted(arr2, 10)) {
        cout << "Array 2 is sorted\n";
    } else {
        cout << "Array 2 is not sorted\n";
    }

    return 0;
}
