#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
void revArray1(int *arr){
  //size of this array
  int size=(sizeof(arr)/sizeof(arr[0]));
  //another array where the reverse data will be copied
  int tempArr[10]={0};
  // now using for loop
  for (int i = size-1, j=0; i >= 0; i-- ,j++)
  {
    tempArr[j]=arr[i];
  }
  for (int i = 0; i <= size-1; i++)
  {
    arr[i]=tempArr[i];
  }
  cout<<"array has been reversed"<<endl;
  cout<<"reversed array is ";
  for (int i = 0; i <= size-1; i++)
  {
    cout<<arr[i]<<" ";
  }
}

void revArray2(int *arr){
  //size of this array
  int size=(sizeof(arr)/sizeof(arr[0]));
  for (int i = 0, j=size-1; i < j; i++,j--)
  {
    swap(arr[i],arr[j]);
  }
  cout<<"array has been reversed"<<endl;
  cout<<"reversed array is ";
  for (int i = 0; i <= size-1; i++)
  {
    cout<<arr[i]<<" ";
  }
}

int main() {
  //reversing an array (method 1)
  //first of all we need an array with some data
  int arr[10]={1,2,3,4,5,6,7,8,9,10};
  revArray1(arr);
  //reversing an array (method 2)
  revArray2(arr);
  return 0;
}
