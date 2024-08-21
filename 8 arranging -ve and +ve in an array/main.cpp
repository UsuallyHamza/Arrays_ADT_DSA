#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
    //shifting -ve elements on left while +ve on right 
    int arr1[10] = {-1, 2, -3, 4, -5, -6, 7, 8, 9, 10};
    int i = 0, j = 9;

    while (i <= j) {
        // Move i to the right while arr1[i] is negative
        while (i <= j && arr1[i] < 0) {
            i++;
        }
        // Move j to the left while arr1[j] is non-negative
        while (i <= j && arr1[j] >= 0) {
            j--;
        }
        // Swap if i is less than or equal to j
        if (i < j) {
            swap(arr1[i], arr1[j]);
        }
    }

    cout << "All negative numbers are on the left while positive numbers are on the right:\n";
    for (int k = 0; k < 10; k++) {
        cout << arr1[k] << " ";
    }
    cout << endl;

    return 0;
}
