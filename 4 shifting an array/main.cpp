#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

void lShiftArr(int arr[],int size){
  for (int i = 0; i < size-1; i++)
  {
    arr[i]=arr[i+1];
  }
  arr[size-1]=0;
}
void rShiftArr(int arr[],int size){
  for (int i = size-1; i > 0; i++)
  {
    arr[i]=arr[i-1];
  }
  arr[0]=0;
}

void printArr(const int arr[], int size, const string& shiftType) {
    cout << "Array after " << shiftType << " shift is as follows:\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
  int arr[10]={1,2,3,4,5,6,7,8,9,10};
  int size=sizeof(arr)/sizeof(arr[0]);
  
  //left shifting an array
  lShiftArr(arr,size);
  printArr(arr,size,"left");
  rShiftArr(arr,size);
  printArr(arr,size,"right");

  return 0;
}
